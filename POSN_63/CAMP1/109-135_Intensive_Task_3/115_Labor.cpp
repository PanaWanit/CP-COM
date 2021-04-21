#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mxN = 1e6+10;
int a[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	ll m;
	cin >> n >> m;
	for(int i=0; i<n; ++i)
		cin >> a[i];
	ll lb=0, rb=1e18;
	while(lb<rb) {
		ll mb=(lb+rb)/2, sum=0ll;
		for(int i=0; i<n; ++i)
			sum+=mb/a[i];
		if(sum>=m) rb=mb;
		else lb=mb+1;
	}
	cout << lb << "\n";
	return 0;
}

