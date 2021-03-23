/*
    TASK: Locked Room
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,j,w,k;
    bool operator <(const A&o) const{
        return w >o.w;
    }
};
int di[]={0,0,1,-1},dj[]={1,-1,0,0};
int a[60][60];
int dis[2][60][60];
priority_queue<A> he;
int main(){
    int n,i,j,ni,nj,ii,jj,si,sj,ei,ej,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d %d %d %d",&si,&sj,&ei,&ej);
    for(k=0;k<2;k++)
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
                dis[k][i][j]=1<<30;
    dis[0][si][sj]=0;
    he.push({si,sj,0,0});
    while(!he.empty()){
        ni=he.top().i,nj=he.top().j,k=he.top().k;
        he.pop();
        for(i=0;i<4;i++){
            ii=ni+di[i],jj=nj+dj[i];
            if(ii==n+1||jj==n+1||ii==0||jj==0) continue;
            if(a[ii][jj]<0){
                if(dis[(k+1)%2][ii][jj] > dis[k][ni][nj]-a[ii][jj]){
                    dis[(k+1)%2][ii][jj] = dis[k][ni][nj]-a[ii][jj];
                    he.push({ii,jj,dis[(k+1)%2][ii][jj],(k+1)%2});
                    //printf("ll");
                }
            }
            else{
                if(dis[k][ii][jj] > dis[k][ni][nj]+a[ii][jj]){
                    dis[k][ii][jj] = dis[k][ni][nj]+a[ii][jj];
                    he.push({ii,jj,dis[k][ii][jj],k});
                }
            }


        }

    }



    printf("%d",dis[1][ei][ej]);
    return 0;

}
/*
4
1 1 9 1
1 4 1 -3
1 9 2 1
1 1 3 1
3 2 3 3
*/
