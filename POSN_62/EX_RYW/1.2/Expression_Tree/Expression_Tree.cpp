#include<bits/stdc++.h>
using namespace std;
#define sz(x) (int)(x).size()
const int mxN = 257;
int l[mxN], r[mxN];
vector<char> node={NULL};
stack<int> st;
string input;
void infix(int u = sz(node)-1) {
	if(l[u]) {
		cout << "(";
		infix(l[u]);
	}
	cout << node[u];
	if(r[u]) {
		infix(r[u]);
		cout << ")";
	}
}
void prefix(int u = sz(node)-1) {
	if(u==0) return;
	cout << node[u];
	prefix(l[u]);
	prefix(r[u]);
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	getline(cin, input);
	for(auto& c : input) {
		if(isalpha(c)) {
			node.push_back(c);
			st.push(sz(node)-1);
		}
		else if(c == '/' || c == '+' || c == '-' || c == '*') {
			node.push_back(c);
			r[sz(node)-1] = st.top(), st.pop();
			l[sz(node)-1] = st.top(), st.pop();
			st.push(sz(node)-1);
		}
	}
	infix();
	cout << "\n";
	prefix();
	cout << "\n";
	return 0;
}
