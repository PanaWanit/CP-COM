/*
    TASK: PT_PM2.5
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{int i,j;};
queue<A> qu;
int dis[1010][1010];
char a[1010][1010];
int di[4]={0,0,1,-1},dj[4]={1,-1,0,0};
int main(){
    int q,i,j,n,ni,nj,ii,jj,r,c,si,sj,ei,ej;
    scanf("%d",&q);
    while(q--){
        int ans=0;
        scanf("%d %d",&r,&c);
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                scanf(" %c",&a[i][j]);
                if(a[i][j]=='S') si=i,sj=j;
                if(a[i][j]=='E') ei=i,ej=j;
            }

        }
        memset(dis,-1,sizeof dis);
        dis[ei][ej]=0;
        qu.push({ei,ej});
        while(!qu.empty()){
            ni=qu.front().i,nj=qu.front().j;
            qu.pop();
            for(i=0;i<4;i++){
                ii=ni+di[i],jj=nj+dj[i];
                if(ii>=r||ii<0||jj>=c||jj<0) continue;
                if(a[ii][jj]=='#' || dis[ii][jj]!=-1) continue;
                dis[ii][jj]=dis[ni][nj]+1;
                qu.push({ii,jj});
            }
        }
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(isdigit(a[i][j])&&dis[i][j]<=dis[si][sj]&&dis[i][j]!=-1){
                    ans+=(a[i][j]-'0');
                }
            }
        }
        if(dis[si][sj]!=-1)
        printf("%d\n",ans);
        else
            printf("-1\n");
    }
    return 0;
}
/*
2
5 7
000E0#3
#0##0#0
050#0#0
4#0#0#0
0#0S000
1 4
SE69
*/
