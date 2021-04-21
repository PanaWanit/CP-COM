#include<bits/stdc++.h>
using namespace std;
int num(char c) {
	if(c=='H') return 1;
	else if(c=='O') return 16;
	else if(c=='C') return 12;
	else if(c=='(') return -1;
	else if(c==')') return -2;
	return c-'0';
}
void solve() {
	stack<int> st;
	string s;
	cin >> s;
	st.push(num(s[0]));
	for(int i=1; s[i]; ++i) {
		if(num(s[i])==-2) {
			int sum=0;
			while(st.top()!=-1) {
				sum += st.top(), st.pop();
			}
			st.pop();
			st.push(sum);
		}
		else if(isalpha(s[i])||s[i]=='(') {
			st.push(num(s[i]));
		}
		else st.top()*=num(s[i]);
	}
	int sum=0;
	while(!st.empty())
		sum += st.top(), st.pop();
	cout << sum <<  "\n";
}
int main() {
	//ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}

