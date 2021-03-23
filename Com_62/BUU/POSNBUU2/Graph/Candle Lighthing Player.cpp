/*
    TASK: Candle Lightig Player
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char a[2020][2020];
int dis[2020][2020];
int di[8]={0,0,1,-1,1,1,-1,-1};
int dj[8]={1,-1,0,0,-1,1,-1,1};
struct A{
    int i,j;
};
A now[2020];
queue<A> qu;
int main(){
    int r,c,i,j,cnt=0,ni,nj,k,ii,jj,ans=0;
    scanf("%d %d",&r,&c);
    memset(dis,-1,sizeof dis);
    for(i=0;i<r;i++){
            scanf(" %s",a[i]);
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j]=='1'&&dis[i][j]==-1){
                cnt++;
                dis[i][j]=1;
                qu.push({i,j});
                while(!qu.empty()){
                    ni=qu.front().i,nj=qu.front().j;
                    qu.pop();
                    for(k=0;k<8;k++){
                        ii=ni+di[k],jj=nj+dj[k];
                        if(ii>=r||ii<0||jj>=c||jj<0) continue;
                        if(a[ii][jj]=='0' || dis[ii][jj]!=-1) continue;
                        dis[ii][jj]=1;
                        qu.push({ii,jj});
                    }
                }

            }
        }
    }

    printf("%d",cnt);
    return 0;
}

/*
4 5
10011
00001
01100
10011
*/
