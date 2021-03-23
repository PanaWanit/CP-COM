/*
    TASK: Temperature Rising
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[30][30];
int mark[30][30],mx=-2e9;
int m;
int di[]={1,-1,0,0},dj[]={0,0,-1,1};
void play(int i,int j){
    mark[i][j]=1;
    mx=max(mx,a[i][j]);
    int k,ii,jj;
    for(k=0;k<4;k++){
        ii = i+di[k] , jj = j+dj[k];
        if(ii > m || jj > m || ii <1 || jj <1) continue;
        if(mark[ii][jj]) continue;
        if(a[ii][jj]==100 || a[ii][jj] <= a[i][j]) continue;
        play(ii,jj);
    }
    mark[i][j]=0;
}
int main(){
    int sx,sy,i,j;
    cin >> m >> sx >> sy;
    for(i=1;i<=m;i++){
        for(j=1;j<=m;j++) cin >> a[i][j];
    }
    play(sy,sx);
    cout << mx << endl;
    return 0;
}
