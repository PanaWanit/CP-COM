#include<bits/stdc++.h>
using namespace std;
#define sz(x) (int)(x).size()
void solve() {
	string a,b;
	cin >> a >> b;
	int mn=sz(a)+sz(b);
	for(int i=0; i<sz(a); i++) {
		for(int j=i; j<sz(a); j++) {
			for(int k=0; k<sz(b); k++) {
				for(int l=k; l<sz(b); l++) {
					if(a.substr(i, j-i+1)==b.substr(k, l-k+1)) {
						mn=min(mn, sz(a)-(j-i+1) + sz(b)-(l-k+1));
					}
				}
			}
		}
	}
	cout << mn << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	for(cin >> t; t--;)
		solve();
	return 0;
}

