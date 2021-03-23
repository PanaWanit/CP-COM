#include<bits/stdc++.h>
using namespace std;
struct A{int i,j;};
int dis[1010][1010],di[8]={2,2,-2,-2,1,1,-1,-1},dj[8]={1,-1,1,-1,2,-2,2,-2};
char a[1010][1010];
queue<A> qu;
int main(){
    int r,c,i,j,si,sj,ei,ej,ni,nj,ii,jj,l=0;
    memset(dis,-1,sizeof dis);
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;i++)
        for(j=1;j<=c;j++)
            scanf(" %c",&a[i][j]);
    scanf("%d %d %d %d",&si,&sj,&ei,&ej);
    dis[si][sj]=0;
    qu.push({si,sj});
    while(!qu.empty()){
        ni=qu.front().i,nj=qu.front().j;
        qu.pop();
        for(i=0;i<8;i++){

            ii=ni+di[i],jj=nj+dj[i];
            if(ii<=0||jj<=0||ii>=r+1||jj>=c+1) continue;
            if(a[ii][jj]=='X'||dis[ii][jj]!=-1) continue;
            dis[ii][jj]=dis[ni][nj]+1;
            qu.push({ii,jj});
        }

    }
    printf("%d\n",dis[ei][ej]);
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++)
            printf("%d ",dis[i][j]);
        printf("\n");
    }
    return 0;
}
/*
5 5
.....
.....
.....
.....
.....
3 5
1 3
*/
