#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mxN = 1e6+1;
ll a[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m;
	cin >> n >> m;
	for(int i=0; i<n; ++i) {
		cin >> a[i];
	}
	ll lb=0, rb=*max_element(a, a+n);
	while(lb < rb) {
		ll mb = (lb+rb+1)/2, sum=0ll;
		for(int i=0; i<n; i++)
			sum += (a[i]>mb?a[i]-mb:0);
		if(sum>=m) lb=mb;
		else rb=mb-1;
	}
	cout << lb << "\n";
	return 0;
}
