#include<bits/stdc++.h>
using namespace std;
char a[120][120];
int n;
void dropL()
{
    int i,j;
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=n;i++)
        {
            if(a[i][j]=='#'&&a[i][j-1]=='.'&&j-1>=1)
                swap(a[i][j],a[i][j-1]);
        }
    }

}
void dropD()
{
    int i,j;

   for(i=n-1;i>=1;i--)
    {
         for(j=n;j>=1;j--)
        {
            if(a[i][j]=='#'&&a[i+1][j]=='.'&&i+1<=n)
                swap(a[i][j],a[i+1][j]);
        }
    }
}
int main()
{
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            scanf(" %c",&a[i][j]);

    for(i=1;i<=n;i++)
            dropL();

    for(i=1;i<=n;i++)
            dropD();

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            printf("%c",a[i][j]);
        printf("\n");
    }

}
/*
5
.....
.#.#.
.###.
...##
#....
*/
