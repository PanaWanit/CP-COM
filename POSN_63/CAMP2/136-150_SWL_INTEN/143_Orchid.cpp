#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	vector<int> v;
	for(int i=0,x; i<n; ++i) {
		cin >> x;
		auto it = upper_bound(v.begin(), v.end(), x);
		if(it==v.end()) v.push_back(x);
		else *it=x;
	}
	cout << n-v.size() << "\n";
	return 0;
}

