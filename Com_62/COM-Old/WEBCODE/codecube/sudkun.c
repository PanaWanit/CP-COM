#include<stdio.h>
int main()
{
    int n,i,j;

    for(i=2;i<=24;i++)
    {
        for(j=1;j<=12;j++)
            printf("%d x %d = %d\n",i,j,i*j);
        printf("\n");
    }

    return 0;
}
