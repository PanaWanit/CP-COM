#include<bits/stdc++.h>
using namespace std;

#define sz(x) (int)(x).size()
const int  mxN = 120;
int c[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	string a;
	stack<int> st;
	cin >> n >> a;
	for(int i=0; i<n; ++i) {
		if(a[i]=='(') {
			st.push(0);
		}
		if(a[i]==')') {
			int mx=0;
			while(st.top()!=0) {
				mx=max(mx, st.top());
				st.pop();
			}
			st.pop();
			st.push(mx+1);
			c[mx+1]++;
		}
	}
	int cnt=0, ans=0;
	for(int i=1; i<=100&&c[i]; ++i)
		++cnt, ans+=c[i];
	cout << ans << "\n" << cnt << "\n";
	for(int i=1; i<=cnt; ++i)
		cout << c[i] << " ";
	cout << "\n";
	return 0;
}
