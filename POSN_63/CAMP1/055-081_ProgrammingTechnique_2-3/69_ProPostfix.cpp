#include<bits/stdc++.h>
using namespace std;
char s[30];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	stack<int> st;
	while(n--) {
		cin >> s;
		char c=s[0];
		if(isdigit(s[0])||isdigit(s[1])) {
			st.push(stoi(s));
			continue;
		}
		else {
			if((int)st.size()<=1) {
				cout << "No Solution\n";
				return 0;
			}
			int first, second;
			second = st.top(), st.pop();
			first = st.top(), st.pop();
			if(c=='*') 
				st.push(first*second);
			else if(c=='+') 
				st.push(first+second);
			else 
				st.push(first-second);
		}
	}
	if((int)st.size()!=1) {
		cout << "No Solution\n";
		return 0;
	}
	cout << st.top() << "\n";
	return 0;
}
