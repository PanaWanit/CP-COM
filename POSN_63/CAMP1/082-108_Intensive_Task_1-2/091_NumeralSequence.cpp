#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	//ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	ll x;
	cin >> t;
	while(t--) {
		ll k=9,it=1;
		cin >> x;
		while(x>k*it) {
			x-=k*it;
			k=k*10;
			++it;
		}
		ll num=(x-1+it)/it, z=0;
		while(k) {
			k/=10;
			z+=k;
		}
		string s = to_string(z+num);
		//cout << s << '\n';
		cout << s[(x-1+it)%it] << "\n";
	}
	return 0;
}
