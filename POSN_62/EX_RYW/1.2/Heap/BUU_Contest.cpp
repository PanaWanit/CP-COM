#include<bits/stdc++.h>
using namespace std;
priority_queue<pair<int,int>> pq;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int d,k,ans=0;
	cin >> d >> k;
	for(int i=0; i<d; i++) {
		int n,b;
		cin >> n >> b;
		while(n--) {
			int x;
			cin >> x;
			x-=k*i;
			pq.push(make_pair(x, i));
		}
		for(int j=0; j<b; j++) {
			ans += pq.top().first+k*(i-pq.top().second)+pq.top().second*k, pq.pop();
		}
	}
	cout << ans << "\n";
	return 0;
}
