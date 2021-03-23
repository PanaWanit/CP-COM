#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+100;
pair<int,int> a[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> a[i].first >> a[i].second;
	}
	sort(a, a+n, [](const auto& a, const auto& b) {
			return a.second < b.second;
			}
		);
	int p=0,cnt=1;
	for(int i=1; i<n; i++) {
		if(a[i].first >= a[p].second)
			cnt++, p=i;
	}
	cout << cnt << "\n";
	return 0;
}
