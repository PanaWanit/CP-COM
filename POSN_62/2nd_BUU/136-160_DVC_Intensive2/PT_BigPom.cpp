#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const int mxN = 1e5+1;
int pos[mxN],n,c;
ll r,s;
ll dvc(int lb, int rb) {
	ll cnt = upper_bound(pos, pos+c, rb) - lower_bound(pos, pos+c, lb);
	if(cnt == 0ll) return r;
	if(lb == rb) return cnt*s;
	int mb = (lb+rb)/2;
	ll L = dvc(lb, mb) , R = dvc(mb+1, rb);
	return min(L+R, s*(rb-lb+1)*cnt);
}
void solve() {
	cin >> n >> c >> r >> s;
	for(int i=0; i<c; i++) 
		cin >> pos[i];
	sort(pos, pos+c);
	cout << dvc(1, 1<<n) << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}
