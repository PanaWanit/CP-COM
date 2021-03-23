/*
    TASK: BUU Climbing
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,j,w;
    bool operator <(const A&o) const{
        return w >o.w;
    }
};
char a[110][110];
int dis[110][110];
int di[8]={0,0,1,-1,1,1,-1,-1};
int dj[8]={1,-1,0,0,1,-1,1,-1};
priority_queue<A> he;
int main(){
    int q,i,n,u,v,w,j,ni,nj,ii,jj,ans,si,sj;
    scanf("%d",&q);
    while(q--){
        int r,c;
        ans=1e9;
        int mx=-2e9;
        scanf("%d %d",&r,&c);
        for(i=0;i<r;i++){
            scanf(" %s",a[i]);
        }
        for(i=0;i<r;i++)for(j=0;j<c;j++) dis[i][j]=1<<30;
        scanf("%d %d",&si,&sj);
        dis[si][sj]=0;
        he.push({si,sj,0});
        while(!he.empty()){
            ni=he.top().i,nj=he.top().j;
            he.pop();
            for(i=0;i<8;i++){
                ii=ni+di[i],jj=nj+dj[i];
                if(ii>=r||jj>=c||jj<0||ii<0) continue;
                if(a[ii][jj]=='#') continue;
                if(dis[ii][jj] > dis[ni][nj]+pow(abs(a[ii][jj]-a[ni][nj])+1,2)){
                    dis[ii][jj] = dis[ni][nj]+pow(abs(a[ii][jj]-a[ni][nj])+1,2);
                    he.push({ii,jj,dis[ii][jj]});
                }
            }

        }
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(mx < a[i][j]&&a[i][j]!='#') mx=a[i][j],ni=i,nj=j;
            }
        }
        ans=dis[ni][nj];
        if(dis[ni][nj]==1<<30) printf("NO\n");
        else printf("%d\n",ans);

    }
    return 0;
}
/*
2
5 5
11111
1###1
12341
12221
12221
0 0
3 3
1#3
2#3
##4
1 0
*/
