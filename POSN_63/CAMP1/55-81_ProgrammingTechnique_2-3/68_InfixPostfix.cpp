#include<bits/stdc++.h>
using namespace std;
int priority(char c) {
	if(c=='^') return 3;
	if(c=='/'||c=='*') return 2;
	return 1;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	stack<char> st;
	while(n--) {
		string s;
		cin >> s;
		char c=s[0];
		if(!isdigit(c)) {
			if(c=='(' || st.empty()) {
				st.push(c);
			}
			else if(c==')') {
				while(st.top()!='(')
					cout << st.top() << " ", st.pop() ;
				st.pop();
			}	
			else {
				while(!st.empty()&&st.top()!='('&&priority(st.top())>=priority(c)) {
					cout << st.top() << " ", st.pop();
				}
				st.push(c);
			}
		}
		else cout << s << " ";
	}
	while(!st.empty()) cout << st.top() << " " , st.pop();
	cout << "\n";
	return 0;
}
