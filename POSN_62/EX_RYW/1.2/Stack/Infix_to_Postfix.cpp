#include<bits/stdc++.h>
using namespace std;
unordered_map<char, int> priority = {
	{'+', 1} , {'-', 1}, {'*', 2}, {'/', 2}, {'^', 3}, {'(', 0}
};
stack<char> st;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	string input;
	cin >> n;
	while(n--) {
		cin >> input;
		char c = input[0];
		if(isdigit(c)) {
			 cout << input << " "; 
		}
		else if(c=='(' || st.empty()) {
			st.push(c);
		}
		else if(c == ')') {
			while(st.top() != '(')
				cout << st.top() << " ", st.pop();
			st.pop();
		}
		else {
			while(!st.empty() && priority[c] <= priority[st.top()])
				cout << st.top() << " ", st.pop();
			st.push(c);
		}
	}
	while(!st.empty()) cout << st.top() << " ", st.pop();
	cout << "\n";
	return 0;
}
