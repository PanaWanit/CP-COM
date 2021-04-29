#include<bits/stdc++.h>
using namespace std;
//quick sum using logN
const int mxN = 1e5+10;
int n;
struct fenwick {
	int a[mxN];
	void update(int idx, int val) {
		for(int i=idx; i<=n; i+=i&-i)
			a[i]+=val;
	}
	int get_sum(int idx) {
		int sum=0;
		for(int i=idx; i>0; i-=i&-i)
			sum += a[i];
		return sum;
	}
	int query(int l, int r) {
		return get_sum(r) - get_sum(l-1);
	}
} f;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	cin >> n;
	for(int i=1, num; i<=n; ++i) {
		cin >> num;
		f.update(i, num);
	}
	int q;
	cin >> q;
	while(q--) {
		int l, r;
		cin >> l >> r;
		cout << f.query(l, r) << "\n";
	}
	return 0;
}

