/*
 	TASK : String Shift
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e3;
string a;
void solve(){
	int n;
	cin >> n >> a;
	int k,shf;
	cin >> k >> shf;
	for(int i=0; i<n; i+=k){
		for(int j=0; j<k; j++){
			cout << a[i+(j+k-shf)%k];
		}
	}
	cout << "\n";
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int t;
	for(cin >> t;t--;) solve();
	return 0;
}
