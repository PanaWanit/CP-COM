#include<bits/stdc++.h>
using namespace std;
priority_queue<int, vector<int>, greater<int>> pq;
void solve() {
	int n,m,k,cnt=0,x;
	cin >> n >> m >> k;
	while(n--)
		cin >> x, pq.push(x);
	while(m--) {
		int opr;
		cin >> opr;
		switch(opr) {
			case 1:
				cin >> x;
				pq.push(x-cnt);
				break;
			case 2:
				cnt+=k;
				break;
			default:
				if(!pq.empty()) pq.pop();
		}
	}
	cout << (int)pq.size() << " ";
	long long ans=0;
	while(!pq.empty())
		ans += pq.top()+cnt, pq.pop();
	cout << ans << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}
