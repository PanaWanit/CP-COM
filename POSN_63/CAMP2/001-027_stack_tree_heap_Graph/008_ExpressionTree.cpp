#include<bits/stdc++.h>
using namespace std;
const int mxN = 300;
char node[mxN];
int l[mxN], r[mxN],cnt=1;
void in(int i) {
	if(l[i]) {
		cout << "(";
		in(l[i]);
	}
	cout << node[i];
	if(r[i]) {
		in(r[i]);
		cout << ")";
	}
}
void pre(int i) {
	cout << node[i];
	if(l[i])
		pre(l[i]);
	if(r[i])
		pre(r[i]);
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	string a;
	getline(cin, a);
	stack<int> st;
	for(int i=0; a[i]; ++i) {
		if(isalpha(a[i])) {
			st.push(cnt);
			node[cnt++]=a[i];
		}
		else if(a[i]=='+'||a[i]=='/'||a[i]=='*'||a[i]=='-') {
			int second = st.top(); st.pop();
			int first= st.top(); st.pop();
			l[cnt]=first, r[cnt]=second;
			st.push(cnt);
			node[cnt++]=a[i];
		}
	}
	in(cnt-1);
	cout << "\n";
	pre(cnt-1);
	cout << "\n";
	return 0;
}

