#include<bits/stdc++.h>
using namespace std;
#define sz(x) (int)(x).size()
string a;
vector<int> v;
int char_check(char c) {
	return (c=='^'?2:c=='*'?1:0);
}
void calc(int l, int r, int st) {
	if(st==sz(v)) {
		for(int i=l; i<=r; ++i)
			cout << a[i];
		return;
	}
	int dep=0, mn=3;
	for(int i=l; i<=r; ++i) {
		if(isalpha(a[i])) continue;
		if(a[i]=='(' || a[i]==')') dep += (a[i]=='(') - (a[i]==')');
		else if(!dep) mn = min(char_check(a[i]), mn);
	}
	if(a[l]=='(' && a[r]==')' && mn==3) {
		if(v[st]==1) 
			calc(l+1, r-1, st+1);
		else
			cout << "null";
		return;
	}
	vector<pair<int,int>> pos(1);
	int last=l;
	dep=0;
	for(int i=l; i<=r; ++i) {
		if(isalpha(a[i])) continue;
		if(a[i]=='(' || a[i]==')') dep += (a[i]=='(') - (a[i]==')');
		else if(!dep&&mn == char_check(a[i]))
			pos.emplace_back(last, i-1), last=i+1;
	}
	pos.emplace_back(last, r);
	if(v[st]>sz(pos)-1) {
		cout << "null";
		return;
	}
	calc(pos[v[st]].first, pos[v[st]].second, st+1);
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	cin >> a;
	int t;
	for(cin >> t; t--;) {
		int x;
		cin >> x;
		while(x) {
			v.push_back(x);
			cin >> x;
		}
		for(int i=sz(v)-1; i>=0; --i)
			cout << "op(" << v[i] << ",";
		cout << "p";
		for(int i=sz(v); i--;)
			cout << ")";
		cout << "=";
		calc(0, sz(a)-1, 0);
		cout << "\n";
		v.clear();
	}
	return 0;
}
