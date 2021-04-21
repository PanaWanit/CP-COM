#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
	if(a%b==0)
		return b;
	return gcd(b, a%b);
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,ans,a;
	cin >> n >> ans;
	while(--n)
		cin >> a, ans=gcd(a, ans);
	cout << ans << "\n";
	return 0;
}
