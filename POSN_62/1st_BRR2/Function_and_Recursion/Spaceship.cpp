/*
 	TASK : Spaceship
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 21;
int n,mn = 2e9 , mm[mxN] , kb[mxN] , mt[mxN] , xx[mxN] , yy[mxN] , zz[mxN],m;
bool mark[mxN];
void play(int x,int y, int z,int mouse,int keyboard,int monitor,int money){
	if(mouse >= n && keyboard >= n && monitor >= n){
		mn = min(mn,money);
		return ;
	}
	for(int i=0; i<m; i++){
		if(mark[i]) continue;
		mark[i] = 1;
		play(xx[i],yy[i],zz[i],mouse+mm[i],keyboard+kb[i],monitor+mt[i],money+((x-xx[i])*(x-xx[i]) + (y-yy[i])*(y-yy[i]) + (z-zz[i])*(z-zz[i])) );
		mark[i] = 0;
	}
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int x,y,z;
	cin >> n >> x >> y >> z;
	cin >> m;
	for(int i=0; i<m; i++){
		cin >> xx[i] >> yy[i] >> zz[i] >> mm[i] >> kb[i] >> mt[i];
	}
	play(x,y,z,0,0,0,0);
	cout << mn << "\n";
	return 0;
}
