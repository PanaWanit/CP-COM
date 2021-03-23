#include<bits/stdc++.h>
using namespace std;
char a[30],b[50][50];
int main()
{
    int n,k,q,i,j;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d %d",&n,&k);
        scanf(" %s",a);
        int len=strlen(a);
        int l=len/n;
        int z;
        for(i=0;i<l;i++)
        {
            for(j=0;j<n;j++)
            {

                b[i][j]=a[j+i*n];
            }
        }
        k=k%n;
        for(i=0;i<l;i++)
        {
            for(j=1;j<=n;j++)
            {

                printf("%c",b[i][(j+n-k-1)%n]);
            }
            printf(" ");
        }
        printf("\n");
    }



    return 0;
}
