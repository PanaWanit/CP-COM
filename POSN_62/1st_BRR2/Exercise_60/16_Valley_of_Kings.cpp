/*
 	TASK : Valley of Kings
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e3;
int a[mxN],r[mxN];
void solve(){
	int n,p=0,cnt=0;
	cin >> n;
	for(int i=0; i<n; i++) cin >> a[i];
	sort(a,a+n);
	for(int i=0; i<n; i++){
		if(a[i] == a[i+1]) i++,cnt++;
		else r[p++] = a[i];
	}
	cout << cnt << "\n";
	if(p == 0){
		cout << "Empty\n";
		return;
	}
	sort(r,r+p);
	for(int i=0; i<p; i++) cout << r[i] << " " ;
	cout << "\n";
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int t;
	for(cin >> t;t--;) solve();
	return 0;
}
