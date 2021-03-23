#include<bits/stdc++.h>
using namespace std;
struct A{int i,j;};
int a[110][110],mark[110][110];
vector<A> g;
int main(){
    int r,c,i,j,ii,jj,ni,nj;
    cin >> r >> c;
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            cin >> a[i][j];
            if(a[i][j]==1) g.push_back({i,j});
        }
    }
    for(A x:g){
        ni = x.i, nj = x.j;
        for(i=ni+1;i<=ni+4;i++){
            if( i > r ) continue;
            mark[i][nj]=1;
            for(j=nj+1;j<=nj+4;j++){
            if(j > c) continue;
            mark[i][j]=1;
            }
            for(j=nj-1;j>=nj-4;j--){
            if(j<1) continue;
            mark[i][j]=1;
            }
        }
        for(i=ni-1;i>=ni-4;i--){
            if(i < 1 ) continue;
            mark[i][nj]=1;
            for(j=nj+1;j<=nj+4;j++){
            if(j > c) continue;
            mark[i][j]=1;
            }
            for(j=nj-1;j>=nj-4;j--){
            if(j<1) continue;
            mark[i][j]=1;
            }
        }
        for(j=nj+1;j<=nj+4;j++){
            if(j > c) continue;
            mark[ni][j]=1;
        }
        for(j=nj-1;j>=nj-4;j--){
            if(j<1) continue;
            mark[ni][j]=1;
        }
    }
    for(A x : g){
        mark[x.i][x.j]=0;
    }
    int q,x,y;
    cin >> q;
    while(q--){
        cin >> x >> y;
        if(mark[x][y]==1){
            printf("yes\n");
            mark[x][y]=0;
        }
        else{
            printf("no\n");
        }
    }
    return 0;
}
/*
12 11
0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 1 0 0 0 0 0
0 0 0 0 0 1 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0
7
1 1
2 4
7 6
2 4
12 11
1 11
6 6
no
yes
no
no
no
no
no
*/
