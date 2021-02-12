#include<bits/stdc++.h>
using namespace std;
#define FOE(x, a) for(auto& x : a)
map<char, char> mp = { {'[', ']'}, {'(', ')'} };
void solve() {
	stack<char> st;
	string a;
	cin >> a;
	FOE(x, a) {
		if(x == ']' || x == ')') {
			if(st.empty() || (!st.empty()&& mp[st.top()] != x)) {
				cout << "No\n";
				return;
			}
			st.pop();
		}
		else st.push(x);
	}
	cout << "Yes\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	for(cin >> t; t--;)
		solve();
	return 0;
}
