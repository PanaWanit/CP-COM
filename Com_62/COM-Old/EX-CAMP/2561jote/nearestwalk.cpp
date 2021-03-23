#include<bits/stdc++.h>
using namespace std;
struct A{int i,j;};
char a[1010][1010];
int dis[1010][1010],di[4]={1,-1,0,0},dj[4]={0,0,1,-1};
queue<A> qu;
int main(){
    int q,r,c,i,j,ii,jj,si,sj,ei,ej,ni,nj,k;
    scanf("%d",&q);

    while(q--){
        scanf("%d %d",&r,&c);
        for(i=1;i<=r;i++)
            for(j=1;j<=c;j++){
                scanf(" %c",&a[i][j]);
                if(a[i][j]=='A') si=i,sj=j;
                if(a[i][j]=='B') ei=i,ej=j;
            }
        memset(dis,-1,sizeof dis);
        dis[si][sj]=0;
        qu.push({si,sj});
        while(!qu.empty()){
            ni=qu.front().i,nj=qu.front().j;
            qu.pop();
            for(i=0;i<4;i++){
                ii=di[i]+ni,jj=dj[i]+nj;
                if(ii==0||ii==r+1||jj==0||jj==c+1) continue;
                else if(dis[ii][jj]!=-1) continue;
                else if(a[ii][jj]=='#') continue;
                dis[ii][jj]=dis[ni][nj]+1;
                qu.push({ii,jj});
            }
        }
        if(dis[ei][ej]==-1) printf("-1\n");
        else printf("%d\n",dis[ei][ej]);

    }


    return 0;
}
