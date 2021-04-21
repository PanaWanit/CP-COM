#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	stack<char> st;
	while(n--) {
		char c;
		cin >> c;
		if(!st.empty()&&st.top()==c) st.pop();
		else st.push(c);
	}
	cout << (int)st.size() << "\n";
	if(st.empty()) cout << "empty\n";
	else  {
		while(!st.empty())
			cout << st.top(), st.pop();
	}
	cout << "\n";
	return 0;
}

