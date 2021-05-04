#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+10;
pair<int, int> a[mxN], b[mxN];
bool query() {
	int n;
	cin >> n;
	for(int i=0; i<n-1; ++i) {
		cin >> a[i].first >> a[i].second;
		if(a[i].first<a[i].second) swap(a[i].first, a[i].second);
	}
	for(int i=0; i<n-1; ++i) {
		cin >> b[i].first >> b[i].second;
		if(b[i].first<b[i].second) swap(b[i].first, b[i].second);
	}
	sort(a, a+n-1), sort(b, b+n-1);
	for(int i=0; i<n-1; ++i) {
		if(a[i]!=b[i]) return 0;
	}
	return 1;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int q=5;
	while(q--)
		cout << (query()?"Y":"N");
	cout << "\n";
	return 0;
}

