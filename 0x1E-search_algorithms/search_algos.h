#ifndef SEARCH_A
#define SEARCH_A
#include <stdlib.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int rec_binary_search(int *array, size_t index, size_t size, int value);

#endif
