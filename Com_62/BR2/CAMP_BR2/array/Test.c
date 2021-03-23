#include<stdio.h>
int a[100]={1,2,3,4,5,6};

int main()
{
    for(int i=0;i<5;i++)
        printf("[%d] ",i),printf("%d ",a[i++]);


    return 0;
}
