#include<stdio.h>

void average(double *a, double *b, double *c)
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("average: %lf", (*(a+i)+*(b+i)+*(c+i))/3);
    }
}
