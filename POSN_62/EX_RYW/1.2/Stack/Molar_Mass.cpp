#include<bits/stdc++.h>
using namespace std;
const int mxN = 105;
unordered_map<char, int> mp = { {'C', 12}, {'H', 1}, {'O', 16}};
char a[mxN];
stack<int> st;
void solve() {
	cin >> a;
	for(int i=0; a[i]; i++) {
		if(a[i] == '(') st.push(0);
		else if(isalpha(a[i])) st.push(mp[a[i]]);
		else if(a[i]==')') {
			int cnt=0;
			while(!st.empty() && st.top()!=0) 
				cnt += st.top(), st.pop();
			st.pop();
			st.push(cnt);
		}
		else if(isdigit(a[i]))
			st.top() *= (int)(a[i]-'0');
	}
	int ans=0;
	while(!st.empty())
		ans+=st.top(), st.pop();
	cout << ans << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}
