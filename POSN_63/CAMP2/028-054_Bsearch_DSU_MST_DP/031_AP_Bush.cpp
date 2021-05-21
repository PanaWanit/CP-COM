#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 1010;
ll a[mxN];
void query() {
	int n;
	ll k;
	cin >> n >> k;
	for(int i=0; i<n; ++i)
		cin >> a[i];
	sort(a, a+n);
	ll lb=0ll, rb=sqrt(k);
	while(lb<rb) {
		ll mb=(lb+rb)/2, d = (mb+1)*(mb+1), sum=d;
		if(d>=k) {
			rb=mb;
			continue;
		}
		for(int i=1; i<n; ++i) {
			if(a[i]==a[i-1]) continue;
			ll dis = a[i]-a[i-1]-1, diff=mb-dis/2;
			if(diff>0) {
				if(dis%2==1) sum += d-diff*diff;
				else sum += d-diff*diff-diff;
			}
			else sum+=d;
			if(sum>=k) break;
		}
		if(sum>=k) rb=mb;
		else lb=mb+1;
	}
	cout << lb << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int Q;
	cin >> Q;
	while(Q--)
		query();
	return 0;
}

