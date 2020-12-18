#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ar array
#define vt vector
#define FOE(x, a) for(auto& x: a)
const int mxN = 1e5;
int a[mxN], b[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m;
	cin >> n;
	for(int i=0; i<n; i++) cin >> a[i];
	for(int i=0; i<n; i++) cin >> b[i];
	cin >> m;
	ll lb=0, rb=(int)1e9;
	while(lb < rb) {
		ll mb=(lb+rb+1)/2, ex=m;
		for(int i=0; i<n; i++) {
			if(b[i] < a[i]*mb) ex-=a[i]*mb-b[i];
		}
		if(ex < 0) rb=mb-1;
		else lb=mb;
	}
	cout << lb << "\n";
	return 0;
}
