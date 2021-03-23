#include<bits/stdc++.h>
using namespace std;
struct A{int i,j;};
int di[4]={0,0,-1,1},dj[4]={1,-1,0,0};
char a[1010][1010];
int dis[1010][1010];
queue<A> qu;
int main(){
    int r,c,ni,nj,si,sj,ei,ej,ii,jj,q,i,j,k;
    scanf("%d",&q);
    while(q--){
            scanf("%d %d",&r,&c);
        for(i=1;i<=r;i++){
            for(j=1;j<=c;j++){
                scanf(" %c",&a[i][j]);
                if(a[i][j]=='A') si=i,sj=j;
                if(a[i][j]=='B') ei=i,ej=j;
            }
        }
            memset(dis,-1,sizeof dis);
            qu.push({si,sj});
            dis[si][sj]=0;
        while(!qu.empty()){
            ni=qu.front().i,nj=qu.front().j;
            qu.pop();
            for(i=0;i<4;i++){
                ii=ni+di[i],jj=nj+dj[i];
                if(ii==r+1||ii==0||jj==0||jj==c+1) continue;
                else if(a[ii][jj]=='#') continue;
                else if(dis[ii][jj]!=-1) continue;
                dis[ii][jj]=dis[ni][nj]+1;
                qu.push({ii,jj});

            }
        }
        printf("%d\n",dis[ei][ej]);
        memset(a,0,sizeof a);
    }
    return 0;
}
/*
2
4 5
#A.#.
..#.B
.#..#
....#

4 5
#A.#.
..#.B
.#..#
..#.#

*/
