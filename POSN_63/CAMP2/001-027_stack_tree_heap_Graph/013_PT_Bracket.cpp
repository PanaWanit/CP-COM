#include<bits/stdc++.h>
using namespace std;
#define ll long long
void query() {
	ll dep=0,x,y,ans=0,ch=1;
	string a;
	cin >> a;
	priority_queue<int> pq;
	for(int i=0; a[i]; ++i) {
		if(a[i]=='(')
			++dep;
		else if(a[i]==')')
			--dep;
		else if(a[i]=='?') {
			cin >> x >> y;
			ans+=y;
			pq.push(y-x);
			--dep;
		}
		if(dep<0) {
			if(pq.empty()) {
				ch=0;
			}
			else {
				ans -= pq.top(), pq.pop();
				dep=1;
			}
		}
	}
	if(dep==0&&ch) cout << ans << "\n";
	else cout << -1 << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int Q;
	cin >> Q;
	while(Q--)
		query();
	return 0;
}

