#include<bits/stdc++.h>
using namespace std;
#define ar array
vector<ar<int,4>> v;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m,a,b,c,d;
	cin >> n >> m;
	for(int i=0; i<n; ++i) {
		cin >> a >> b >> c >> d;
		v.push_back(ar<int,4>{a, b, c, d});
	}
	while(m--) {
		int ans=0;
		cin >> a >> b >> c >> d;
		for(int i=0; i<n; ++i) {
			int co=0;
			ar<int, 4>& q=v[i];
			if(a<=q[0]&&q[0]<c) co++;
			else if(q[0]<=a&&a<q[2]) co++;
			if(d<=q[3]&&q[3]<b) co++;
			else if(q[3]<=d&&d<q[1]) co++;
			ans += co/2;
		}
		cout << ans << "\n";
	}
	return 0;
}
