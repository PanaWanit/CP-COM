/*
	Task: Find Peak using Binary Search
	Author: Pana Wanit
	Lang: C++
	School: RYW
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mxN = 1e5;
ll a[mxN];
int main() {
	ios::sync_with_stdio(0),cin.tie(0);
	int n;
	cin >> n;
	for(int i=0; i<n; i++) cin >> a[i];
	ll lb = 0ll , rb = n-1;
	while(lb < rb) {
		ll mb = (lb+rb)/2;
		if( (mb == 0 || a[mb-1] <= a[mb]) && (mb == n-1 || a[mb+1] <= a[mb]) ) {
			lb = mb;
			break;
		}
		else if( mb > 0 && a[mb-1] > a[mb] ) rb = mb-1;
		else lb = mb+1;
	}
	cout << lb << "\n";
	return 0;
}
