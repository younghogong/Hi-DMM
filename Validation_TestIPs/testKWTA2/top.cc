#include<cstdio>
#include<cstring>
#include<iostream>
#include<ap_int.h>
#include "ap_utils.h"
#define REQ_N 8192
static int dynamic_heap0[100],dynamic_heap1[100];

typedef struct{
int size;
int addr;
int free_target;
char cmd;
} allocator_port;

template <int unused>
volatile int HLS_malloc(int size,volatile allocator_port *allocator)
{
#pragma HLS INLINE off
	int status;
	io_section_HLS_malloc:
	{
#pragma HLS PROTOCOL fixed
		allocator->cmd = 2; //send cmd and size to allocator
#pragma HLS PROTOCOL fixed
		allocator->size = size;
		allocator->free_target = 0;
		ap_wait();
		status = allocator->addr;
		ap_wait();
		return status;
	}
}

template <int unused>
volatile int HLS_free(int free_target, int free_size, volatile allocator_port *allocator)
{
#pragma HLS INLINE off
	int status;
	io_section_HLS_free:
	{
#pragma HLS PROTOCOL fixed
		allocator->cmd = 3; //send cmd and size to allocator
#pragma HLS PROTOCOL fixed
		allocator->size = 0;
		allocator->free_target = free_target;
		ap_wait();
		return 1;
	}

}


//                    0  1 2 3 4 5 6 7 8  9 10 11 1213  14  15 16 171819  20  21  22  23  24  252627 28 29 30  31 32 33 34 35 36
int req_list[REQ_N]={     1,     1,     1,     1,     2,     0,     1,     1,     1,     1,     1,     1,     1,     3,     1,     1,     0,     1,     1,     1,     1,     1,     1,     1,     1,     1,     4,     1,     1,    13,     1,     6,     7,     1,     1,     6,     1,     1,     1,    12,     9,     1,     1,     1,     1,     1,     1,    16,     1,     1,     1,     1,     1,    25,     1,     1,    18,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,    38,     1,     1,     1,     1,     1,     1,    30,     1,     1,    47,    40,    22,     1,     3,     1,     1,    43,     1,     1,     1,     1,     1,    57,    53,     1,     1,     1,     1,    50,    21,     1,     1,    13,     1,     1,    31,    52,     1,    46,     1,    64,    33,     1,    51,    31,     1,    28,     1,     1,     1,     1,    30,     5,     1,     1,     1,     1,    70,    14,    37,     1,     1,     1,    62,     1,    17,    74,    59,    20,     1,     1,     1,     0,     1,     1,     1,     1,     1,     1,     1,     1,     1,    15,     1,    41,     1,    58,     1,     1,     1,     1,    63,     1,     1,     1,    50,    75,    83,     1,    10,     1,    30,     1,     1,     1,     1,     1,     1,    19,    31,     1,    85,    41,    67,    14,     1,     1,     1,     1,    48,     1,     1,    39,     1,    27,    54,     1,     1,     1,     1,     1,     1,     1,     1,    32,    45,    94,    26,    84,     1,    46,     1,    66,    86,     1,     1,     1,     1,     1,     1,     1,     1,     1,    26,     1,     1,     1,     1,     1,     1,     1,     1,    20,    34,     1,     1,     1,     1,     1,    47,     1,     1,     1,     1,     1,    38,     1,     1,     1,     1,     1,     1,     1,    40,     1,    91,    89,    40,     1,     1,     1,    39,     1,     1,     1,     1,     1,     1,    62,     1,   127,     1,     1,     1,    85,     1,   101,     1,     1,   123,    36,     1,     1,     1,   128,    17,     1,     1,    31,     1,     1,     1,     1,     1,     1,    65,    46,     1,     1,     1,     1,     1,     1,    51,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,   113,   134,     1,     1,   161,   144,     1,     1,   104,     1,     1,     1,    66,     1,     1,     1,     1,     1,     1,     1,     1,    11,     1,     1,     1,     1,   162,     1,     1,     1,    71,     1,     1,   110,     1,     1,     1,     1,     1,     1,    79,     1,   182,   132,     1,    37,     5,     1,   103,     1,   151,     1,     1,   180,     1,     1,     1,     1,     1,   122,     1,     1,     1,   122,     1,     1,     1,     1,     1,    38,     1,    93,   136,     1,     1,     1,     1,    23,     1,     1,     1,   119,     1,     1,     1,   187,   137,     1,    82,     1,     1,     1,   190,     1,     1,     1,     1,     1,     1,     1,     1,     1,    92,     1,     1,     1,   192,    11,   214,     1,     1,    10,   164,     1,     4,    70,     1,     1,    60,     1,     1,     1,     1,     1,   158,     1,     1,     1,     1,   203,     1,     1,   229,     1,     1,     1,    59,     1,     1,    82,   233,     1,     1,     1,   145,     1,     1,     1,    18,   118,   210,     1,     1,     1,     1,   226,     1,     1,     1,   191,   243,    65,     1,     1,   138,   219,     1,     1,     1,   107,     1,     1,     1,     1,     1,     1,     0,     1,   216,     1,   207,     1,    15,   260,     1,     1,     1,    27,     1,     1,     8,     1,   156,     1,     1,    78,   190,     1,     1,     1,    69,     1,     1,    10,     1,     1,   205,     1,    53,     1,     1,     1,     1,   209,    44,     1,     1,   230,     1,     1,     1,     1,     1,     1,     1,   231,   272,     1,     1,   121,     1,     1,     1,     1,     1,     1,   183,     1,    71,     1,     1,   117,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,   248,     1,     1,     1,     1,   290,     1,     1,     1,   108,     1,   204,     1,    47,    15,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,   200,     1,     1,     1,     1,   316,     1,     1,     1,   274,     1,     1,    99,     1,     1,     1,   270,     1,     1,     1,     1,   269,     1,     1,   206,     1,     1,     1,     1,     1,     1,     1,     1,    96,     1,     1,   125,   330,    29,     1,    98,     1,     1,     1,   118,     1,   298,     1,   309,     1,   217,     1,   285,     1,     1,     1,     1,     1,     1,   244,     1,     1,     1,     1,   306,     1,     1,   207,   145,   228,     1,   148,   149,     1,     9,     1,   311,     1,     1,     1,     1,     1,     1,     1,   152,    64,     1,     1,     1,     1,     1,     1,   304,     1,     1,    42,    65,     1,     1,   344,   202,     1,     1,     1,    90,     1,     1,     1,    84,   286,     1,     1,     1,   293,    14,     1,   257,     1,     1,    23,     1,     1,     1,   185,     1,     1,     1,     1,     1,     1,     1,    24,     1,     1,     1,     1,   271,   165,   231,   341,     1,   338,     1,     1,     1,     1,     1,   375,   302,   295,    72,     1,     1,    46,     1,     1,   234,     1,   266,     1,   320,   255,     2,   203,     1,     1,   371,    92,   208,    80,     1,    42,     1,    41,     1,     1,     1,     1,     1,     1,     1,    74,    70,     1,     1,     1,     1,   358,     1,     1,     1,     1,   174,     5,     1,     1,     1,     1,     1,     1,     1,     1,    55,     1,     1,     1,     1,     1,     1,   289,     1,     1,    75,   388,   194,     1,     1,   144,     1,     1,     1,     1,     1,     1,   312,     1,     1,     1,     1,    63,   308,   319,     1,    76,     1,   349,    49,     1,   173,   236,   195,     1,    78,     1,   402,     1,     1,   281,     1,     1,     1,   356,     1,     1,     1,     1,     1,   221,   336,   164,     1,     1,   123,   159,     7,     1,     1,     1,     1,   258,     1,   364,     1,    19,   220,     1,   345,     1,     1,     1,   275,     1,     1,     1,     1,     1,     1,     1,     1,    98,   199,   122,     1,   284,   394,     1,   318,   373,     1,     1,     1,   253,     1,     1,   335,   177,     1,    45,     1,     1,   198,     1,     1,     1,   263,     1,     1,   141,    33,   215,   399,     1,     1,     1,   347,   223,     1,     1,   250,     1,   443,     1,     1,     1,     1,     1,   246,     1,   261,     1,   186,     1,     1,     1,     1,     1,   407,     1,     1,   360,     1,     1,     1,     1,   199,     1,     1,     1,     1,   170,     1,     1,     1,     1,   143,     1,     1,     1,   455,    12,   386,     1,   256,     1,     1,     1,     1,     1,   202,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1};
int req_cmd[REQ_N]={     2,     2,     3,     2,     3,     3,     2,     2,     2,     2,     2,     2,     2,     3,     2,     2,     3,     3,     2,     2,     2,     2,     2,     2,     2,     2,     3,     2,     2,     3,     2,     3,     3,     2,     2,     3,     2,     2,     2,     3,     3,     2,     2,     2,     2,     2,     2,     3,     2,     2,     2,     2,     2,     3,     2,     2,     3,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     3,     2,     2,     2,     2,     2,     2,     3,     2,     2,     3,     3,     3,     2,     3,     2,     2,     3,     2,     2,     2,     2,     2,     3,     3,     2,     2,     2,     2,     3,     3,     2,     2,     3,     2,     2,     3,     3,     2,     3,     2,     3,     3,     2,     3,     3,     2,     3,     2,     2,     2,     2,     3,     3,     2,     2,     2,     2,     3,     3,     3,     2,     2,     2,     3,     2,     3,     3,     3,     3,     2,     2,     2,     3,     2,     2,     2,     2,     2,     2,     2,     2,     2,     3,     2,     3,     2,     3,     3,     2,     2,     2,     3,     2,     2,     2,     3,     3,     3,     2,     3,     2,     3,     2,     2,     2,     2,     2,     2,     3,     3,     2,     3,     3,     3,     3,     2,     2,     2,     2,     3,     2,     2,     3,     2,     3,     3,     2,     2,     2,     2,     2,     2,     2,     2,     3,     3,     3,     3,     3,     2,     3,     2,     3,     3,     2,     2,     2,     2,     2,     2,     2,     2,     2,     3,     2,     2,     2,     2,     2,     2,     2,     2,     3,     3,     2,     2,     2,     2,     2,     3,     2,     2,     2,     2,     2,     3,     2,     2,     2,     2,     2,     3,     2,     3,     2,     3,     3,     3,     2,     2,     2,     3,     2,     2,     2,     2,     2,     2,     3,     2,     3,     2,     2,     2,     3,     2,     3,     2,     2,     3,     3,     2,     2,     2,     3,     3,     2,     2,     3,     2,     2,     2,     2,     2,     2,     3,     3,     2,     2,     2,     2,     2,     2,     3,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     3,     3,     2,     2,     3,     3,     2,     2,     3,     2,     2,     2,     3,     2,     2,     2,     2,     2,     2,     2,     2,     3,     2,     2,     2,     2,     3,     2,     2,     2,     3,     2,     2,     3,     2,     2,     2,     2,     2,     2,     3,     2,     3,     3,     2,     3,     3,     2,     3,     2,     3,     2,     2,     3,     2,     2,     2,     2,     2,     3,     2,     2,     2,     3,     2,     2,     2,     2,     2,     3,     2,     3,     3,     2,     2,     2,     2,     3,     2,     2,     2,     3,     2,     2,     2,     3,     3,     2,     3,     2,     2,     2,     3,     2,     2,     2,     2,     2,     2,     2,     2,     2,     3,     2,     2,     2,     3,     3,     3,     2,     2,     3,     3,     2,     3,     3,     2,     2,     3,     2,     2,     2,     2,     2,     3,     2,     2,     2,     2,     3,     2,     2,     3,     2,     2,     2,     3,     2,     2,     3,     3,     2,     2,     2,     3,     2,     2,     2,     3,     3,     3,     2,     2,     2,     2,     3,     2,     2,     2,     3,     3,     3,     2,     2,     3,     3,     2,     2,     2,     3,     2,     2,     2,     2,     2,     2,     3,     2,     3,     2,     3,     2,     3,     3,     2,     2,     2,     3,     2,     2,     3,     2,     3,     2,     2,     3,     3,     2,     2,     2,     3,     2,     2,     3,     2,     2,     3,     2,     3,     2,     2,     2,     2,     3,     3,     2,     2,     3,     2,     2,     2,     2,     2,     2,     2,     3,     3,     2,     2,     3,     2,     2,     2,     2,     2,     2,     3,     2,     3,     2,     2,     3,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     3,     2,     2,     2,     2,     3,     2,     2,     2,     3,     2,     3,     2,     3,     3,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     3,     2,     2,     2,     2,     3,     2,     2,     2,     3,     2,     2,     3,     2,     2,     2,     3,     2,     2,     2,     2,     3,     2,     2,     3,     2,     2,     2,     2,     2,     2,     2,     2,     3,     2,     2,     3,     3,     3,     2,     3,     2,     2,     2,     3,     2,     3,     2,     3,     2,     3,     2,     3,     2,     2,     2,     2,     2,     2,     3,     2,     2,     2,     2,     3,     2,     2,     3,     3,     3,     2,     3,     3,     2,     3,     2,     3,     2,     2,     2,     2,     2,     2,     2,     3,     3,     2,     2,     2,     2,     2,     2,     3,     2,     2,     3,     3,     2,     2,     3,     3,     2,     2,     2,     3,     2,     2,     2,     3,     3,     2,     2,     2,     3,     3,     2,     3,     2,     2,     3,     2,     2,     2,     3,     2,     2,     2,     2,     2,     2,     2,     3,     2,     2,     2,     2,     3,     3,     3,     3,     2,     3,     2,     2,     2,     2,     2,     3,     3,     3,     3,     2,     2,     3,     2,     2,     3,     2,     3,     2,     3,     3,     3,     3,     2,     2,     3,     3,     3,     3,     2,     3,     2,     3,     2,     2,     2,     2,     2,     2,     2,     3,     3,     2,     2,     2,     2,     3,     2,     2,     2,     2,     3,     3,     2,     2,     2,     2,     2,     2,     2,     2,     3,     2,     2,     2,     2,     2,     2,     3,     2,     2,     3,     3,     3,     2,     2,     3,     2,     2,     2,     2,     2,     2,     3,     2,     2,     2,     2,     3,     3,     3,     2,     3,     2,     3,     3,     2,     3,     3,     3,     2,     3,     2,     3,     2,     2,     3,     2,     2,     2,     3,     2,     2,     2,     2,     2,     3,     3,     3,     2,     2,     3,     3,     3,     2,     2,     2,     2,     3,     2,     3,     2,     3,     3,     2,     3,     2,     2,     2,     3,     2,     2,     2,     2,     2,     2,     2,     2,     3,     3,     3,     2,     3,     3,     2,     3,     3,     2,     2,     2,     3,     2,     2,     3,     3,     2,     3,     2,     2,     3,     2,     2,     2,     3,     2,     2,     3,     3,     3,     3,     2,     2,     2,     3,     3,     2,     2,     3,     2,     3,     2,     2,     2,     2,     2,     3,     2,     3,     2,     3,     2,     2,     2,     2,     2,     3,     2,     2,     3,     2,     2,     2,     2,     3,     2,     2,     2,     2,     3,     2,     2,     2,     2,     3,     2,     2,     2,     3,     3,     3,     2,     3,     2,     2,     2,     2,     2,     3,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2};
int req_size[REQ_N]={     0,     0,     1,     0,     1,     1,     0,     0,     0,     0,     0,     0,     0,     1,     0,     0,     1,     1,     0,     0,     0,     0,     0,     0,     0,     0,     1,     0,     0,     1,     0,     1,     1,     0,     0,     1,     0,     0,     0,     1,     1,     0,     0,     0,     0,     0,     0,     1,     0,     0,     0,     0,     0,     1,     0,     0,     1,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     1,     0,     0,     0,     0,     0,     0,     1,     0,     0,     1,     1,     1,     0,     1,     0,     0,     1,     0,     0,     0,     0,     0,     1,     1,     0,     0,     0,     0,     1,     1,     0,     0,     1,     0,     0,     1,     1,     0,     1,     0,     1,     1,     0,     1,     1,     0,     1,     0,     0,     0,     0,     1,     1,     0,     0,     0,     0,     1,     1,     1,     0,     0,     0,     1,     0,     1,     1,     1,     1,     0,     0,     0,     1,     0,     0,     0,     0,     0,     0,     0,     0,     0,     1,     0,     1,     0,     1,     1,     0,     0,     0,     1,     0,     0,     0,     1,     1,     1,     0,     1,     0,     1,     0,     0,     0,     0,     0,     0,     1,     1,     0,     1,     1,     1,     1,     0,     0,     0,     0,     1,     0,     0,     1,     0,     1,     1,     0,     0,     0,     0,     0,     0,     0,     0,     1,     1,     1,     1,     1,     0,     1,     0,     1,     1,     0,     0,     0,     0,     0,     0,     0,     0,     0,     1,     0,     0,     0,     0,     0,     0,     0,     0,     1,     1,     0,     0,     0,     0,     0,     1,     0,     0,     0,     0,     0,     1,     0,     0,     0,     0,     0,     1,     0,     1,     0,     1,     1,     1,     0,     0,     0,     1,     0,     0,     0,     0,     0,     0,     1,     0,     1,     0,     0,     0,     1,     0,     1,     0,     0,     1,     1,     0,     0,     0,     1,     1,     0,     0,     1,     0,     0,     0,     0,     0,     0,     1,     1,     0,     0,     0,     0,     0,     0,     1,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     1,     1,     0,     0,     1,     1,     0,     0,     1,     0,     0,     0,     1,     0,     0,     0,     0,     0,     0,     0,     0,     1,     0,     0,     0,     0,     1,     0,     0,     0,     1,     0,     0,     1,     0,     0,     0,     0,     0,     0,     1,     0,     1,     1,     0,     1,     1,     0,     1,     0,     1,     0,     0,     1,     0,     0,     0,     0,     0,     1,     0,     0,     0,     1,     0,     0,     0,     0,     0,     1,     0,     1,     1,     0,     0,     0,     0,     1,     0,     0,     0,     1,     0,     0,     0,     1,     1,     0,     1,     0,     0,     0,     1,     0,     0,     0,     0,     0,     0,     0,     0,     0,     1,     0,     0,     0,     1,     1,     1,     0,     0,     1,     1,     0,     1,     1,     0,     0,     1,     0,     0,     0,     0,     0,     1,     0,     0,     0,     0,     1,     0,     0,     1,     0,     0,     0,     1,     0,     0,     1,     1,     0,     0,     0,     1,     0,     0,     0,     1,     1,     1,     0,     0,     0,     0,     1,     0,     0,     0,     1,     1,     1,     0,     0,     1,     1,     0,     0,     0,     1,     0,     0,     0,     0,     0,     0,     1,     0,     1,     0,     1,     0,     1,     1,     0,     0,     0,     1,     0,     0,     1,     0,     1,     0,     0,     1,     1,     0,     0,     0,     1,     0,     0,     1,     0,     0,     1,     0,     1,     0,     0,     0,     0,     1,     1,     0,     0,     1,     0,     0,     0,     0,     0,     0,     0,     1,     1,     0,     0,     1,     0,     0,     0,     0,     0,     0,     1,     0,     1,     0,     0,     1,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     1,     0,     0,     0,     0,     1,     0,     0,     0,     1,     0,     1,     0,     1,     1,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     1,     0,     0,     0,     0,     1,     0,     0,     0,     1,     0,     0,     1,     0,     0,     0,     1,     0,     0,     0,     0,     1,     0,     0,     1,     0,     0,     0,     0,     0,     0,     0,     0,     1,     0,     0,     1,     1,     1,     0,     1,     0,     0,     0,     1,     0,     1,     0,     1,     0,     1,     0,     1,     0,     0,     0,     0,     0,     0,     1,     0,     0,     0,     0,     1,     0,     0,     1,     1,     1,     0,     1,     1,     0,     1,     0,     1,     0,     0,     0,     0,     0,     0,     0,     1,     1,     0,     0,     0,     0,     0,     0,     1,     0,     0,     1,     1,     0,     0,     1,     1,     0,     0,     0,     1,     0,     0,     0,     1,     1,     0,     0,     0,     1,     1,     0,     1,     0,     0,     1,     0,     0,     0,     1,     0,     0,     0,     0,     0,     0,     0,     1,     0,     0,     0,     0,     1,     1,     1,     1,     0,     1,     0,     0,     0,     0,     0,     1,     1,     1,     1,     0,     0,     1,     0,     0,     1,     0,     1,     0,     1,     1,     1,     1,     0,     0,     1,     1,     1,     1,     0,     1,     0,     1,     0,     0,     0,     0,     0,     0,     0,     1,     1,     0,     0,     0,     0,     1,     0,     0,     0,     0,     1,     1,     0,     0,     0,     0,     0,     0,     0,     0,     1,     0,     0,     0,     0,     0,     0,     1,     0,     0,     1,     1,     1,     0,     0,     1,     0,     0,     0,     0,     0,     0,     1,     0,     0,     0,     0,     1,     1,     1,     0,     1,     0,     1,     1,     0,     1,     1,     1,     0,     1,     0,     1,     0,     0,     1,     0,     0,     0,     1,     0,     0,     0,     0,     0,     1,     1,     1,     0,     0,     1,     1,     1,     0,     0,     0,     0,     1,     0,     1,     0,     1,     1,     0,     1,     0,     0,     0,     1,     0,     0,     0,     0,     0,     0,     0,     0,     1,     1,     1,     0,     1,     1,     0,     1,     1,     0,     0,     0,     1,     0,     0,     1,     1,     0,     1,     0,     0,     1,     0,     0,     0,     1,     0,     0,     1,     1,     1,     1,     0,     0,     0,     1,     1,     0,     0,     1,     0,     1,     0,     0,     0,     0,     0,     1,     0,     1,     0,     1,     0,     0,     0,     0,     0,     1,     0,     0,     1,     0,     0,     0,     0,     1,     0,     0,     0,     0,     1,     0,     0,     0,     0,     1,     0,     0,     0,     1,     1,     1,     0,     1,     0,     0,     0,     0,     0,     1,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0};

volatile int checkKWTA_mini2(//volatile int *size, volatile int *cmd,
		volatile allocator_port *alloc_1)
{
//#pragma HLS interface ap_hs port=size
//#pragma HLS interface ap_hs port=cmd
#pragma HLS interface ap_hs port=alloc_1

	int i,r;
	int cmd,size;
	for (i=0;;i++)
	{
		cmd = req_cmd[i];
		size = req_list[i];
		if ((cmd) == 2)
		{
			r=HLS_malloc<1>(size,alloc_1);
		}
		else if ((cmd) == 3)
		{

			r=HLS_free<1>(size,req_size[i],alloc_1);
		}
		else if ((cmd) == 0) break;
	}
	return r;
}

int main()
{
	int acc_IO[3000]; acc_IO[0]=0;acc_IO[3]=11;
	int alloc_1[100],alloc_2[100],alloc_3[100],alloc_4[100],alloc_5[100];
	//acc_OS(1,2,3,4,5,alloc_1,alloc_2,alloc_3,alloc_4,alloc_5);
	int i;
	for (i=0;i<2000;i+=10) printf("%d ",acc_IO[i]);
	return 0;
}
