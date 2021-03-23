#include<bits/stdc++.h>
int i,j,k,m,n,z;
char a[10010][80],b[10010][80];
int main()
{
    scanf("%d %d %d",&n,&m,&k);
    for(i=0;i<n;i++)
        for(j=0;j<k;j++)
            scanf(" %c",&a[i][j]);

    for(i=0;i<m;i++)
        for(j=0;j<k;j++)
            scanf(" %c",&b[i][j]);

    for(i=0;i<n;i++)
        for(z=0;z<m;z++)
            for(j=0;j<k;j++)
                if(b[z][j]==a[i][j])
                    printf("Accepted\n");
                else printf("Rejected\n");
    return 0;
}
/*
5 3 4
PEAT
LOVE
PLAY
SUCK
KITE
KISS
KITE
SUCK
*/
/*
char a[50];
scanf(" %s",a);
char a[1010][50];
for(i=1;i<=1000;i++)
    scanf(" %s",a[i]);
*/
