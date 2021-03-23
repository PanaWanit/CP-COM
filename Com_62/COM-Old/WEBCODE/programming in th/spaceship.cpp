/*
    TASK: SpaceShip
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int n,x[25],y[25],z[25];
int m[25],k[25],c[25],mark[25],r,mx=2e9;
void play(int nx,int ny,int nz,int money,int mouse,int keyboard,int monitor){
    if(mouse >= n && keyboard >=n && monitor >=n){
        mx = min(mx,money);
        return ;
    }
    for(int i=0;i<r;i++){
        if(mark[i]) continue;
        mark[i]=1;
        int amoney;
        int xx = nx-x[i],yy=ny-y[i],zz=nz-z[i];
        amoney = xx*xx+yy*yy+zz*zz;
        play(x[i],y[i],z[i],money+amoney,mouse+m[i],keyboard+k[i],monitor+c[i]);
        mark[i]=0;
    }

}

int main(){
    int sx,sy,sz;
    cin >> n >> sx >> sy >> sz >> r;
    for(int i=0;i<r;i++) cin >> x[i] >> y[i] >> z[i] >> m[i] >> k[i] >> c[i];
    play(sx,sy,sz,0,0,0,0);
    cout << mx << endl;
    return 0;
}
