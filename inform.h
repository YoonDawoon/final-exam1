#include<stdio.h>

typedef struct Score
{
    double kor, mat, eng;
}score;

typedef struct Student
{
    struct Score info;
    int num;
    char name[5];
}student;
