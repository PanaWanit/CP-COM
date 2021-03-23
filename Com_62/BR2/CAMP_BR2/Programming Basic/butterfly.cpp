/*
    TASK:   Butterfly
    AUTHOR: Pana
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);


    for(i=0;i<n-1;i++)
    {
        for(j=0;j<i+1;j++)
            printf("*");
        for(j=0;j<n*2-3-2*i;j++)
            printf("-");
        for(j=0;j<i+1;j++)
            printf("*");
        printf("\n");
    }
    for(i=0;i<(n*2)-1;i++)
        printf("*");
    printf("\n");

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
            printf("*");
        for(j=0;j<(n*2-3)-(n*2-4)+2*i;j++)
            printf("-");
         for(j=0;j<n-1-i;j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
