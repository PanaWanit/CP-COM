#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mxN = 1e5+1;
int a[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	ll lb=0, rb=1e18;
	int n,m;
	cin >> n >> m;
	for(int i=0; i<n; i++)
		cin >> a[i];
	while(lb < rb) {
		ll mb = lb+(rb-lb)/2;
		ll sum=0ll;
		for(int i=0; i<n; i++)
			sum += mb/a[i];
		if(sum>=m) rb=mb;
		else lb=mb+1;
	}
	cout << lb << "\n";
	return 0;
}
