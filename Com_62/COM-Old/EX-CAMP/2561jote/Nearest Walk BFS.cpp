#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,j;
};
int dis[1010][1010],di[4]={1,-1,0,0},dj[4]={0,0,1,-1};
char a[1010][1010];
queue<A> qu;
int main(){
    int q,r,c,i,j,ii,jj,ni,nj,si,sj,ei,ej,k;
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
        dis[si][sj]=0;
        qu.push({si,sj});
        while(!qu.empty()){
            ni=qu.front().i,nj=qu.front().j;
            qu.pop();
            for(k=0;k<4;k++){
                ii=ni+di[k],jj=nj+dj[k];
                if(ii==0||jj==0||ii==r+1||jj==c+1) continue;
                if(a[ii][jj]=='#') continue;
                if(dis[ii][jj]!=-1) continue;
                dis[ii][jj]=dis[ni][nj]+1;
                qu.push({ii,jj});
            }
        }
        if(dis[ei][ej]==-1) printf("-1\n");
        else printf("%d\n",dis[ei][ej]);
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
