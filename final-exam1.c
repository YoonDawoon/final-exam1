#include<stdio.h>
#include"inform.h"
#include"average.h"

int main(void)
{
    student a[10];
    int i=0, j;
    int res;
    
    while(1)
    {
        printf("hak bun:");
        res=scanf("%d", &a[i].num);
        if(res==-1)
            break;
        printf("name:");
        scanf("%s", a[i].name);
        printf("korean:");
        scanf("%lf", &a[i].info.kor);
        printf("math:");
        scanf("%lf", &a[i].info.mat);
        printf("english:");
        scanf("%lf", &a[i].info.eng);
        i++;
    }
    for(j=0;j<10;j++)
    {
        average(&a[j].info.kor,&a[j].info.mat,&a[j].info.eng);
    }
}
