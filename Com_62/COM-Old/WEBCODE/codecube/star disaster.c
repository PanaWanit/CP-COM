#include<stdio.h>
int main()
{
    int n,i,j,l;
    scanf("%d",&l);
    n=l/2+1;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
            printf("-");
        for(j=0; j<2*i+1; j++)
            printf("*");
        for(j=0; j<n-i-1; j++)
            printf("-");
        printf("\n");
    }
    for(i=1; i<n; i++)
    {
        for(j=0; j<i; j++)
            printf("-");

        for(j=0; j<2*n-2*i-1; j++)
            printf("*");

        for(j=0; j<i; j++)
            printf("-");
        printf("\n");
    }
return 0;
}
