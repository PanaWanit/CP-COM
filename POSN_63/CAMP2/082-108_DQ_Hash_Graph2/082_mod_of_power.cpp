#include<bits/stdc++.h>
using namespace std;
int mop(int a, int b, int c) {
	if(b==0) return 1%c;
	int t = mop(a, b/2, c);
	if(b%2) return ((t*t)%c*a)%c;
	return (t*t)%c;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int Q,a,b,c;
	cin >> Q;
	while(Q--) {
		cin >> a >> b >> c;
		cout << mop(a%c, b, c) << "\n";
	}
	return 0;
}

