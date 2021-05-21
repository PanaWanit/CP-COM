#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mxN = 1e6+10;
int a[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m,k,l;
	cin >> n >> m >> k >> l;
	for(int i=0; i<n; ++i)
		cin >> a[i];
	while(k--) {
		ll sum=0ll;
		for(int q=m,pos,last=0; q--;) {
			cin >> pos;
			int ub=upper_bound(a, a+n, pos+l)-a, lb=max((int)(lower_bound(a, a+n, pos-l)-a), last);
			sum += (ll)(ub-lb);
			last=ub;
		}
		cout << sum << "\n";
	}
	return 0;
}

