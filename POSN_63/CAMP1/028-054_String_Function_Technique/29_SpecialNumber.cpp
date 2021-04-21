#include<bits/stdc++.h>
using namespace std;
void solve() {
	string a;
	cin >> a;
	int num = stoi(a);
	for(int i=0; i<(int)a.size(); ++i) {
		num -= pow(a[i]-'0', i+1);
	}
	cout << (num==0?"Y":"N");
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t=5;
	while(t--)
		solve();
	return 0;
}

