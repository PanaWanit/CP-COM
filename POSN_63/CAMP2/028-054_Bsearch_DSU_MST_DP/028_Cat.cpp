#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 2e6+10;
ll a[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=0; i<n; ++i) {
		cin >> a[i];
	}
	ll lb=0, rb=1e18;
	while(lb<rb) {
		ll mb=(lb+rb)/2;
		bool ch=0;
		stack<ll> st;
		for(int i=0; i<n; ++i) {
			if(a[i]>mb) {
				if(st.empty()) st.push(a[i]);
				else if(st.top()==a[i]) st.pop();
				else ch=1;
			}
		}
		if(st.empty()&&!ch) rb=mb;
		else lb=mb+1;
	}
	cout << lb << "\n";
	return 0;
}

