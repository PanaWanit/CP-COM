#include<bits/stdc++.h>
using namespace std;
struct A{int i,j;};
char a[1010][1010];
int dis[1010][1010],di[4]={0,0,1,-1},dj[4]={1,-1,0,0};
queue<A> qu;
int main(){
    int i,j,si,sj,ei,ej,ii,jj,ni,nj,r,c;
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            scanf(" %c",&a[i][j]);
            if(a[i][j]=='S') si=i,sj=j;
            if(a[i][j]=='E') ei=i,ej=j;
        }
    }
        memset(dis,-1,sizeof dis);
        dis[si][sj]=0;
        qu.push({si,sj});
    while(!qu.empty()){
        ni=qu.front().i,nj=qu.front().j;
        qu.pop();
        for(i=0;i<4;i++){
            ii=ni+di[i],jj=nj+dj[i];
            if(a[ii][jj]=='#') continue;
            if(dis[ii][jj]!=-1) continue;

            if(ii==r+1&&dis[1][jj]==-1&&a[1][jj]!='#') qu.push({1,jj}),dis[1][jj]=dis[ni][nj]+1;
            if(ii==0&&dis[r][jj]==-1&&a[r][jj]!='#') qu.push({r,jj}),dis[r][jj]=dis[ni][nj]+1;
            if(jj==c+1&&dis[ii][1]==-1&&a[ii][1]!='#') qu.push({ii,1}),dis[ii][1]=dis[ni][nj]+1;;
            if(jj==0&&dis[ii][c]==-1&&a[ii][c]!='#') qu.push({ii,c}),dis[ii][c]=dis[ni][nj]+1;
            dis[ii][jj]=dis[ni][nj]+1;
            qu.push({ii,jj});
        }
    }
    i=ei,j=ej;
    while(dis[i][j]!=0){
        ni=i,nj=j;
        for(int k=0;k<4;k++){
            ii=ni+di[k],jj=nj+dj[k];
            if(ii==0) ii=r;
            if(ii==r+1) ii=1;
            if(jj==0) jj=c;
            if(jj==c+1) jj=1;
            if(dis[ii][jj]+1==dis[ni][nj]){
                if(dis[ii][jj]!=0)
                a[ii][jj]='x';
                i=ii,j=jj;
            }
        }

    }
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++)
            printf("%c",a[i][j]);
        printf("\n");
    }

    return 0;
}
/*
6 12
####.#..####
.S.#..#.#E##
#.#...#.#..#
..##..#..#..
.#.#.#.###.#
.........###
*/
