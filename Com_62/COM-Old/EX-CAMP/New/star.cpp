#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int z=(n-1)/2;
    int i,j,k=n;
    if(n%2==0) k--;

        for(i=0;i<z;i++)
        {
            for(j=0;j<z-i;j++)
            printf("-");
            for(j=0;j<i*2+1;j++)
            {
                if(j==0||j==i*2) printf("*");
                else printf("-");
            }

            for(j=0;j<z-i;j++)
            printf("-");

            printf("\n");
        }

        for(i=0;i<k;i++)
            {
                if(i==0||i==k-1) printf("*");
                else printf("-");
            }

        printf("\n");
        if(n%2==0){
        {
            for(i=0;i<n-1;i++)
            {
                if(i==0||i==n-2) printf("*");
                else printf("-");
            }
        }
        printf("\n");}


        for(i=0;i<z;i++)
        {
            for(j=0;j<i+1;j++)
                printf("-");
            for(j=0;j<k-2*(1+i);j++)
             {
                if(j==0||j==k-2*(1+i)-1) printf("*");
                else printf("-");
             }


            for(j=0;j<i+1;j++)
                printf("-");

            printf("\n");
        }


}
