#include<bits/stdc++.h>
using namespace std;
#define sz(x) (int)(x).size()
stack<char> st;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	while(n--) {
		char c;
		bool ch=0;
		cin >> c;
		while(sz(st) && c == st.top())
			st.pop(),ch=1;
		if(!ch) st.push(c);
	}
	cout << sz(st) << "\n";
	if(sz(st)==0) cout << "empty\n";
	else {
		while(sz(st))
			cout << st.top(), st.pop();
		cout << "\n";
	}
	return 0;
}
