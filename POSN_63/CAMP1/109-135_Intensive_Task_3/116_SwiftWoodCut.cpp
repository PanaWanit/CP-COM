#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const int mxN = 1e6+100;
ll a[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	ll c;
	cin >> n >> c;
	for(int i=0; i<n; ++i)
		cin >> a[i];
	ll lb=0, rb=2e9+1;
	while(lb<rb) {
		ll mb = (lb+rb+1)/2, sum=0ll;
		for(int i=0; i<n; ++i) {
			if(a[i]>mb) sum+=a[i]-mb;
		}
		if(sum>=c) lb=mb;
		else rb=mb-1;
	}
	cout << lb << "\n";
	return 0;
}

