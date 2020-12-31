/*
 	TASK : Hero Help
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+2;
int a[mxN], b[mxN];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,k;
	cin >> n >> k;
	for(int i=0; i<n; i++)
		cin >> a[i] >> b[i];
	sort(a, a+n), sort(b, b+n);
	int mx=1;
	for(int i=1; i<n; i++) {
		int now = lower_bound(a, a+i-1, a[i]-k)-a;
		mx = max(mx, i - now);
	}
	for(int i=1; i<n; i++) {
		int now = lower_bound(b, b+i-1, b[i]-k)-b;
		mx = max(mx, i - now);
	}
	cout << mx << "\n";
	return 0;
}
