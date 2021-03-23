#include<stdio.h>
int main()
{
    int n,k,i,j;
    scanf("%d",&k);
    while(k--){

        scanf("%d",&n);
        for(i=1;i<=n+2;i++)
        {
            for(j=0;j<=n-i+1;j++)
                printf(".");
            for(j=0;j<i;j++)
                printf("#");
                printf("+");
            for(j=0;j<n;j++){
                if(i==1||i==n+2)printf("+");
                else printf("#");}
                printf("+");
            printf("\n");
        }

for(i=1;i<=n+2;i++)
        {

            printf("#");
            for(j=0;j<n;j++){
                if(i==1||i==n+2)printf("#");
                else printf("+");}

            printf("#");

            for(j=0;j<n-i+3;j++)
                printf("+");
            for(j=0;j<i-1;j++)
                printf(".");

            printf("\n");
        }



    }
return 0;
}
