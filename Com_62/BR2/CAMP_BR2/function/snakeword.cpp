#include<bits/stdc++.h>
using namespace std;
int d[200][2],len,n,m,w,ch=0,mark[30][30];
char a[30][30],b[30];
int di[4]={1,-1,0,0};
int dj[4]={0,0,1,-1};

void snake(int i,int j,int state)
{
    int k,ii,jj;
    d[state][0]=i,d[state][1]=j;
    if(state==len-1)
    {

        for(i=0;i<len;i++)
            printf("%d %d\n",d[i][0]+1,d[i][1]+1);
            ch=0;
        return;
    }
    for(k=0;k<4;k++)
    {
        ii=i+di[k],jj=j+dj[k];
        if(ii>n||jj>m||ii<=0||jj<=0)    continue;
        if (a[ii][jj] !=b[state+1])     continue;
        if(mark[ii][jj])                continue;
        mark[ii][jj]=1;
        snake(ii,jj,state+1);
        mark[ii][jj]=0;
    }
}


int main()
{
    int i,j,q;
    scanf("%d %d %d",&n,&m,&q);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++){
            scanf(" %c",&a[i][j]);
            a[i][j]=tolower(a[i][j]);
    }
    while(q--)
    {/

        scanf(" %s",b);
        len = strlen(b);
        for(i=0;i<len;i++)
            b[i] = tolower(b[i]);

        for(i=0,ch=1;i<n;i++){
            for(j=0;j<m;j++){
            if(a[i][j]==b[0]){
                mark[i][j]=1;
                snake(i,j,0);
                mark[i][j]=0;
            }
        }

    }
        if(ch)
            printf("No Matching Word\n");
    }
return 0;
}
/*
3 5
TAEPE
TULAR
STOPW
2
PEATT
HELLOWORD
*/
