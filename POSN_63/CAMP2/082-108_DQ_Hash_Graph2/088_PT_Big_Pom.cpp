#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mxN = 1e5+10;
ll a[mxN],n,c,r,s;
ll play(ll lb, ll rb) {
	ll m = upper_bound(a, a+c, rb) - lower_bound(a, a+c, lb), l = rb-lb+1;
	if(m==0) return r;
	if(lb==rb) {
		return s*m*l;
	}
	ll now=s*m*l, mb=(lb+rb)/2;
	return min(now, play(lb, mb)+play(mb+1, rb));
}
void query() {
	cin >> n >> c >> r >> s;
	for(int i=0; i<c; ++i)
		cin >> a[i];
	sort(a, a+c);
	cout << play(1, 1<<n) << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int Q;
	cin >> Q;
	while(Q--)
		query();
	return 0;
}

