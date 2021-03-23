#include<stdio.h>
#include<string.h>
char a[50][50];
int b[50],cnt=0,ch=0;
int main()
{
    int n,m,i,j,h,k=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf(" %c",&a[i][j]);

    for(j=0;j<m;j++)
        scanf("%d",&b[j]);

    for(j=0;j<m;j++)
    {
        for(i=0;i<n+1;i++){

    if(a[i][j]=='O'||i==n+1)
    {
        while(b[j]){

        a[(i--)-1][j]='#';
        b[j]--;
        }
    }
        }

    }


    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
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
1 1 3 2 0


*/

