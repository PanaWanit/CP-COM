#include<bits/stdc++.h>
using namespace std;
set<int> s;
set<int>::iterator it,it2;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,k,x;
	cin >> n >> k;
	while(k--) {
		cin >> x;
		if(s.empty())
			cout << n << "\n";
		else {
			it = it2 = s.lower_bound(x);
			--it;
			if(it2==s.begin())
				cout << *it2-x << "\n";
			else if(it2==s.end())
				cout << x-*it << "\n";
			else
				cout << min(*it2-x, x-*it) << "\n";
		}
		s.insert(x);
	}
	return 0;
}

