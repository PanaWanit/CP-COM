#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+10;
pair<int, int> p[mxN];
void query() {
	vector<int> l;
	int n;
	cin >> n;
	for(int i=0; i<n; ++i)
		cin >> p[i].first >> p[i].second, p[i].first*=-1;
	sort(p, p+n);
	for(int i=0; i<n; ++i) {
		auto it = upper_bound(l.begin(), l.end(), p[i].second);
		if(it==l.end()) l.push_back(p[i].second);
		else *it=p[i].second;
	}
	cout << (int)l.size() << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int Q;
	cin >> Q;
	while(Q--)
		query();
	return 0;
}

