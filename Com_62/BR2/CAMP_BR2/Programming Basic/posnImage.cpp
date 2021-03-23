/*
    TASK:   POSN Image
    AUTHOR: Pana
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
int main()
{
    int n;
    int q,i,j;
    scanf("%d",&q);
    while(q--){
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==1||i==1||i==n/2+1) printf("*");
            else if(j==n&&i<=n/2+1) printf("*");
            else printf("-");
        }
        printf("-");
        for(j=1;j<=n;j++)
        {
            if(i==1||j==1||j==n||i==n) printf("*");
            else printf("-");
        }
        printf("-");
        for(j=1;j<=n;j++)
        {
            if(i==1||i==n||i==n/2+1) printf("*");
           else if(j==1&&i<=n/2+1) printf("*");
           else if(j==n&&i>=n/2+1) printf("*");
            else printf("-");
        }
        printf("-");
        for(j=1;j<=n;j++)
        {
            if(j==1||j==n) printf("*");
            else if(i==j) printf("*");
            else printf("-");
        }






        printf("\n");
    }


    printf("\n");
    }
return 0;
}

