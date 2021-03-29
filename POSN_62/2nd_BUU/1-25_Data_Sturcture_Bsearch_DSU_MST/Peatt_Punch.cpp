#include<bits/stdc++.h>
using namespace std;

const int mxN = 1e5+1;
int a[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int l,q,h,pow;
	cin >> l >> q;
	stack<pair<int,int>> st;
	for(int i=0; i<l; i++) {
		cin >> h;
		while(!st.empty()&&h<st.top().first) st.pop();
		if(st.empty()) pow=0;
		else pow = max(st.top().second, h-st.top().first);
		a[i] = pow;
		st.emplace(h, pow);
	}
	sort(a, a+l);
	while(q--) {
		cin >> h;
		cout << l-(lower_bound(a, a+l, h)-a) << "\n";
	}
	return 0;
}
