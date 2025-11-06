#include <stdio.h>

int suma(int a, int b)
{
    return a+b;
}

#ifndef TESTING
int main(void) {
    printf("la suma es %d.\n", suma(3,5));
}
#endif