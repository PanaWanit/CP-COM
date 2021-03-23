#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    scanf("%d",&n);
    n=n*2+1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==0 || i==0 || j==n-1 || i==n-1) printf("*");
            else if( (i%2==0&&i>j) || (j%2==0&&i<j+1) )printf("*");
            else printf(".");
        }
        printf("\n");
    }


    return 0;
}
