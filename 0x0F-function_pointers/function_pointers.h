#ifndef _HEADER_
#define _HEADEER
#include <stdlib.h>_

void print_name(char *name, void (*f)(char *));

void array_iterator(int *array, size_t size, void (*action)(int));

int op_add(int a, int b);

int op_sub(int a, int b);

int op_mul(int a, int b);

int op_div(int a, int b);

int op_mod(int a, int

int int_index(int *array, int size, int (*cmp)(int));

#endif
