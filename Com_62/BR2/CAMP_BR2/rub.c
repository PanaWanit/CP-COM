#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    n=2*n+1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {if(i%2==1||j%2==1) printf("*");
        else printf("-");}

        printf("\n");
    }
    return 0;
}
