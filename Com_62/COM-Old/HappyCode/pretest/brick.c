#include<stdio.h>
char a[30][30],b[30][30],brick[30];
int main()
{
    int n,m,i,j,k;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            scanf(" %c",&a[i][j]);

    for(j=1;j<=m;j++)
        scanf("%d",&brick[j]);

    for(j=1;j<=m;j++)
    {
        for(i=1;i<=n+1;i++)
        {
            if(a[i][j]=='O'||i==n+1)
                {
                    k=i;
                    while(k--&&brick[j]--)
                    {
                        a[k][j]='#';
                    }
                    brick[j]=0;
                }


        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
            printf("%c",a[i][j]);
        printf("\n");
    }



return 0;

}
/*
8 5
.....
.....
.OO..
.....
.O...
...O.
.....
.....
1 3 3 2 0

*/
