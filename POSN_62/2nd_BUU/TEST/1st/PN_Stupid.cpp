#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
	ll s , p;
	cin >> s >> p;
	ll lb = 1 , rb = s/2+1;
	while(lb < rb) {
		ll mb = (lb+rb)/2;
		if(mb * (s-mb) == p) {
			cout << mb << " " << s-mb << "\n";return;
		}
		if(mb * (s-mb) > p) rb = mb;
		else lb = mb+1;
	}
	cout << "No answer\n";
}
int main() {
	ios::sync_with_stdio(0),cin.tie(0);
	int t;
	for(cin >> t; t--;) 
		solve();
	return 0;
}
//using long double -> trick math
