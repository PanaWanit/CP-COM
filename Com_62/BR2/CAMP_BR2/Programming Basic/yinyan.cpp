/*
    TASK:   YinYang
    AUTHOR: Pana
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
int main()
{
    int n,i,j,q;
    scanf("%d",&q);
    while(q--){
    scanf("%d",&n);
    for(i=0;i<n+2;i++)
    {
        for(j=0;j<n+2;j++)
        {
            if(i>=n-j+1)
                printf("#");
            else
                printf(".");
        }
        for(j=0;j<n+2;j++)
        {

            if(i==0||j==0||j==n+1||i==n+1)printf("+");
            else printf("#");
        }



        printf("\n");
    }
    for(i=0;i<n+2;i++)
    {
        for(j=0;j<n+2;j++)
        {

            if(i==0||j==0||j==n+1||i==n+1)printf("#");
            else printf("+");
        }
        for(j=0;j<n+2;j++)
        {
            if(i>=n-j+2)
                printf(".");
            else
                printf("+");
        }



        printf("\n");
    }
    printf("\n");
    }
    return 0;
}
