#include<bits/stdc++.h>
using namespace std;
char close_pair(char c) {
	if(c==')') return '(';
	if(c=='(') return ')';
	if(c==']') return '[';
	return ']';
}
bool solve() {
	stack<char> st;
	string s;
	cin >> s;
	for(int i=0; s[i]; ++i) {
		if(s[i]=='(' || s[i]=='[')
			st.push(s[i]);
		else if(s[i]==']' || s[i]==')') {
			if(st.empty()) return 0;
			if(close_pair(s[i])==st.top())
				st.pop();
			else return 0;
		}
	}
	if(st.empty()) return 1;
	return 0;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--)
		cout << (solve()?"Yes\n":"No\n");
	return 0;
}

