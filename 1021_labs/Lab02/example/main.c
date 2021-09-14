#include <stdio.h>
#include <stdlib.h>

int main()
{
int x[] = { 1, 2, 3, 4 };

int * p = &x[2];

int * q = &x[1];

int * r = q;

printf("%d", *q );
}
