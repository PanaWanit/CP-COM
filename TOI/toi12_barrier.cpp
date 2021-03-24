#include<bits/stdc++.h>
using namespace std;

using ll = long long;

const int mxN =6e6+1;
ll qs[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,w,idx;
	cin >> n >> w;
	for(int i=1; i<=n; i++) cin >> qs[i] , qs[i] += qs[i-1];
	deque<int> dq{0};
	ll mx = 0;
	for(int i=1; i<=n; i++) {
		while(!dq.empty() && i-dq.front()>w) dq.pop_front();
		while(!dq.empty() && qs[i] < qs[dq.back()]) dq.pop_back();
		dq.push_back(i);
		if(mx < qs[i]-qs[dq.front()]) {
			mx = qs[i]-qs[dq.front()];
			idx = i-dq.front();
		}
		else if(mx == qs[i] - qs[dq.front()]) {
			idx = min(idx, i-dq.front());
		}
	}
	cout << mx << "\n" << idx << "\n";
	return 0;
}
