#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,l;
	cin >> l >> n;
	for(int i=1; i<=l; i++) {
		n -= i*i;
		if(n < 0) {
			cout << l-i+1 << "\n";
			return 0;
		}
	}
	cout << "0\n";
	return 0;
}
