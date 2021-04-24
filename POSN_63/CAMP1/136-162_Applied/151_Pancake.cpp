#include<bits/stdc++.h>
using namespace std;
void query() {
	string b;
	cin >> b;
	int n = b.size(), d=0, now=0;
	for(int i=n-1; i>=0; --i) {
		if(b[i]=='-'&&now==0) now^=1, ++d;
		if(b[i]=='+'&&now==1) now^=1, ++d;
	}
	cout << d << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	for(int i=1; i<=t; ++i) {
		cout << "Case #" << i << ": ";
		query();
	}
	return 0;
}

