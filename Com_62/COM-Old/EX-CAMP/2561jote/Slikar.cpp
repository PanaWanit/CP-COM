#include<bits/stdc++.h>
using namespace std;
struct A{int i,j,t;};
int dis[1010][1010],di[4]={1,-1,0,0},dj[4]={0,0,1,-1};
char a[1010][1010];
queue<A> qu;
int main(){
    int i,j,r,c,ii,jj,ni,nj,ei,ej,si,sj,nt;
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;i++)
        for(j=1;j<=c;j++){
            scanf(" %c",&a[i][j]);
            if(a[i][j]=='S') si=i,sj=j;
            if(a[i][j]=='D') ei=i,ej=j;
            if(a[i][j]=='*'){
                qu.push({i,j,1});
            }
        }

    memset(dis,-1,sizeof dis);
    dis[si][sj]=0;
    qu.push({si,sj,0});

    while(!qu.empty()){
        ni=qu.front().i,nj=qu.front().j,nt=qu.front().t;
        qu.pop();
        if(nt)
        {
         for(i=0;i<4;i++){
            ii=ni+di[i],jj=nj+dj[i];
            if(ii==0||ii==r+1||jj==0||jj==c+1) continue;
            if(a[ii][jj]=='X'||dis[ii][jj]!=-1||a[ii][jj]=='D') continue;
            dis[ii][jj]=-2;
            qu.push({ii,jj,1});
        }//water

        }
        else
        {
            for(i=0;i<4;i++){
            ii=ni+di[i],jj=nj+dj[i];
            if(ii==0||ii==r+1||jj==0||jj==c+1) continue;
            if(a[ii][jj]=='X'||dis[ii][jj]!=-1) continue;
            dis[ii][jj]=dis[ni][nj]+1;
            qu.push({ii,jj,0});
            }
        }//hedgehog

    }
    /*for(i=1;i<=r;i++){
        for(j=1;j<=c;j++)
            printf("%d ",dis[i][j]);
        printf("\n");
        }*/
    if(dis[ei][ej]<0) printf("KAKTUS");
    else printf("%d",dis[ei][ej]);
    return 0;
}
/*
3 3
D.*
...
..S

3 6
D...*.
.X.X..
....S.
*/
