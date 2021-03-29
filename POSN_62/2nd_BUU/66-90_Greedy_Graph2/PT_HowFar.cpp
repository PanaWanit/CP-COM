#include<bits/stdc++.h>
using namespace std;

const int mxN = 1e6+1;
struct A {
	int idx, num;
	bool operator < (const A& o) const {
		return num < o.num || (num == o.num && idx > o.idx) ;
	}
} a[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> a[i].num;
		a[i].idx = i;
	}
	sort(a, a+n);
	cout << a[0].num << a[0].idx << "\n";
	for(int i=1; i<n; i++) {
		if(a[i].num != a[i-1].num) cout << a[i].num << " " abs(a[i].idx-i) << "\n";
	}
	return 0;
}
