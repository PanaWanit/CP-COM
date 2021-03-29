#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	vector<ll> a(n);
	for(int i=0; i<n; i++)
		cin >> a[i];
	ll lb = 0ll, rb = *max_element(a.begin(), a.end())+1;
	while(lb < rb) {
		ll mb = (lb+rb)/2;
		bool ch=1;
		stack<ll> st;
		for(int i=0; i<n; i++) {
			if(mb>=a[i]) continue;
			if(st.empty()) st.push(a[i]);
			else if(st.top() != a[i]) {
				ch=0;
				lb=mb+1;
				break;
			}
			else st.pop();
		}
		if(ch) rb=mb;
	}
	cout << lb << "\n";
	return 0;
}
