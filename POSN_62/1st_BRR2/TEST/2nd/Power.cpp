/*
 	TASK : Power
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 5000;
int a[mxN];
void solve(){
	a[4999] = 1;
	int b,p,tod=0;
	cin >> b >> p;
	while(p--){
		for(int i=mxN-1; i>=0; i--){
			a[i] = a[i]*b+tod;
			tod = a[i]/10;
			a[i]%=10;
		}
	}
	int i;
	for(i=0; i<mxN; i++) if(a[i]) break;
	for(;i<mxN; i++) cout << a[i],a[i]=0;
	cout << "\n";
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int q;
	for(cin >> q; q--;) solve();
	return 0;
}
