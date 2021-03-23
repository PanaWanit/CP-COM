#include<bits/stdc++.h>
int cnt=0,mx=-100;
int n,m;
char a[1010][1010];

void play(int i,int j){
    a[i][j]='.';
    cnt++;
    if(i+1<=n&&a[i+1][j]=='*') play(i+1,j);
    if(j+1<=m&&a[i][j+1]=='*') play(i,j+1);
    if(i-1>=1&&a[i-1][j]=='*') play(i-1,j);
    if(j-1>=1&&a[i][j-1]=='*') play(i,j-1);
}

int main()
{
    int i,j;
    scanf("%d %d",&m,&n);
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            scanf(" %c",&a[i][j]);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cnt=0;
            if(a[i][j]=='*')
            {
                play(i,j);
                if(cnt>mx)
                mx=cnt;

            }


        }
    }
    printf("%d",mx);


    return 0;
}
/*
10 5
..*.....**
.**..*****
.*...*....
..****.***
..****.***



*/
