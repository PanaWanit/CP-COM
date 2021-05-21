#include<bits/stdc++.h>
using namespace std;

#define vt vector

int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,q,h,mx;
	stack<pair<int,int>> st;
	vt<int> a;
	cin >> n >> q;
	for(int i=0; i<n; ++i) {
		cin >> h;
		while(!st.empty()&&st.top().first>=h) st.pop();
		if(st.empty()) mx=0;
		else mx=max(st.top().second, h-st.top().first);
		a.push_back(mx);
		st.push({h, mx});
	}
	sort(a.begin(), a.end());
	while(q--) {
		cin >> h;
		cout << (n-(upper_bound(a.begin(), a.end(), h)-a.begin())) << "\n";
	}
	return 0;
}

