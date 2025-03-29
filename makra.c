#include <stdio.h>

#define N 15

int main()
{
    int sum = 0;

    for(int i = 0; i <= N; i++)
    {
        sum += i;
    }

    printf("Sum of numbers from 0 to %d is %d.\n", N, sum);

}