#include<bits/stdc++.h>
using namespace std;
struct A{int i,j;};
int r,c,di[8]={0,0,1,-1,1,-1,1,-1},dj[8]={1,-1,0,0,1,-1,-1,1},dis[1010][1010];
char a[1010][1010];
queue<A> qu;
int main(){
    scanf("%d %d",&c,&r);
    int i,j,cnt=0,mx=-1e9;
    memset(dis,-1,sizeof dis);
    for(i=1;i<=r;i++)
        for(j=1;j<=c;j++)
            scanf(" %c",&a[i][j]);

    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            if(a[i][j]!='*'&&dis[i][j]==-1){
                qu.push({i,j});
                cnt++;
                dis[i][j]=1;
                while(!qu.empty()){
                    int ni,nj;
                    ni=qu.front().i,nj=qu.front().j;
                    qu.pop();
                    for(int k=0;k<8;k++){
                        int ii,jj;
                        ii=ni+di[k],jj=nj+dj[k];
                        if(ii==0||jj==0||ii==r+1||jj==c+1) continue;
                        else if(dis[ii][jj]!=-1||a[ii][jj]=='*') continue;
                        dis[ii][jj]=1;
                        cnt++;
                        qu.push({ii,jj});
                    }
                }
                mx=max(cnt,mx);
                cnt=0;
            }
        }

    }
    printf("%d\n",mx);

    return 0;
}
/*
10 8
...*....**
..**....**
...*....**
...**.*.**
***.**.***
...**.*.**
...*.*****
...***..**
*/
