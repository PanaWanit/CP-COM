/*
    TASK: Maze
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,j,on;
};
int di[]={0,0,1,-1},dj[]={1,-1,0,0};
int dis[155][155],ans[2][155][155];
int insa[155][155],insb[155][155];
int eis[155][155];
int a[155][155];
queue<A> qu;
int main(){
    int n,m,ii,jj,ni,nj,si,sj,ei,ej,on,i,j,cnt=0,k;
    scanf("%d %d %d %d %d %d",&n,&m,&si,&sj,&ei,&ej);
    memset(dis,-1,sizeof dis);
    memset(eis,-1,sizeof eis);
    /***************************************AREA OF START*********************************************************/
    dis[si][sj]=1;
    qu.push({si,sj});
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
            scanf("%d",&a[i][j]);
    }
    while(!qu.empty()){
        ni=qu.front().i,nj=qu.front().j;
        qu.pop();
        for(i=0;i<4;i++){
            ii=ni+di[i],jj=nj+dj[i];
            if(ii<1||jj<1||ii>n||jj>m) continue;
            if(dis[ii][jj]!=-1 || a[ii][jj]==0) continue;
            dis[ii][jj]=dis[ni][nj]+1;
            qu.push({ii,jj});

        }
    }
    /***************************************AREA OF END***********************************************************/    eis[ei][ej]=1;
    qu.push({ei,ej});
        while(!qu.empty()){
            ni=qu.front().i,nj=qu.front().j;
            qu.pop();
            for(i=0;i<4;i++){
                ii=ni+di[i],jj=nj+dj[i];
                if(ii<1||jj<1||ii>n||jj>m) continue;
                if(eis[ii][jj]!=-1|| a[ii][jj]==0) continue;
                eis[ii][jj]=eis[ni][nj]+1;
                qu.push({ii,jj});

            }
        }
   /************************************ FIND INTERSECTION *********************************************************/
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(dis[i][j]>=0){
                for(k=0;k<4;k++){
                    ii=i+di[k],jj=j+dj[k];
                    if(ii<1||jj<1||ii>n||jj>m) continue;
                    if(a[ii][jj]!=0) continue;
                    insa[ii][jj]=1;
                }
            }
            if(eis[i][j]>=0){
                for(k=0;k<4;k++){
                    ii=i+di[k],jj=j+dj[k];
                    if(ii<1||jj<1||ii>n||jj>m) continue;
                    if(eis[ii][jj]==-1)
                    insb[ii][jj]=1;
                }
            }
        }
    }
    /**************************************** AMOUT OF BOMB POSITION ***************************************************/
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(insa[i][j]==1 && insb[i][j]==1 ) cnt++;
        }
    }
    /********************************************** SHORTEST PATH ***************************************************/
    for(k=0;k<=1;k++){
        for(i=0;i<=n;i++)
            for(j=0;j<=m;j++)
                ans[k][i][j]=1e9;
    }
    ans[0][si][sj]=1;
    qu.push({si,sj,0});
    while(!qu.empty()){
        ni=qu.front().i,nj=qu.front().j,on=qu.front().on;
        qu.pop();
        for(i=0;i<4;i++){
            ii=ni+di[i],jj=nj+dj[i];
             if(ii<1||jj<1||ii>n||jj>m) continue;
             if(ans[on][ii][jj] > ans[on][ni][nj]+1 && a[ii][jj]==1){
                ans[on][ii][jj]=ans[on][ni][nj]+1;
                qu.push({ii,jj,on});
             }
             if(on==0&&ans[on+1][ii][jj] > ans[on][ni][nj]+1 && a[ii][jj]==0){
                ans[on+1][ii][jj]=ans[on][ni][nj]+1;
                qu.push({ii,jj,on+1});
             }
        }
    }
    printf("%d\n%d",cnt,ans[1][ei][ej]);
    return 0;
}
/*
5 8
4 5
2 8
0 0 1 1 0 0 0 0
1 0 1 1 0 1 1 1
1 0 1 1 1 0 0 1
1 1 0 0 1 0 0 1
0 0 1 1 0 1 1 1
*/
