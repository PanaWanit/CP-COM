#include<bits/stdc++.h>
using namespace std;
#define ll long long
void query() {
	set<char> s;
	ll n,now;
	cin >> n;
	if(n==0) {
		cout << "INSOMNIA\n";
		return;
	}
	string a;
	now=n;
	while((int)s.size()!=10) {
		a=to_string(now);
		for(char& c : a)
			s.insert(c);
		now+=n;
	}
	cout << now-n << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	for(int i=1; i<=t; ++i) {
		cout << "Case #" << i << ": ";
		query();
	}
	return 0;
}

