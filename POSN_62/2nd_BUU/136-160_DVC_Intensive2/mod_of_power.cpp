#include<bits/stdc++.h>
using namespace std;
int mod;
int dvc(int a, int b) {
	if(b <= 1) return (!b?1:a%mod);
	int t = dvc(a, b/2);
	return (t*t*(b%2==1?a:1))%mod;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	for(cin >> t; t--;) {
		int a,b;
		cin >> a >> b >> mod;
		a%=mod;
		cout << dvc(a, b) << "\n";
	}
	return 0;
}
