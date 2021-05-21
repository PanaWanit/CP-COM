#include<bits/stdc++.h>
using namespace std;
int mod;
struct A {
	int r1, r2, r3, r6;
};
A operator*(const A& aa, const A& bb) {
	A tmp;
	int a=aa.r1, b=aa.r2, c=aa.r3, d=aa.r6;
	int x=bb.r1, y=bb.r2, z=bb.r3, w=bb.r6;
	tmp.r1 = ((a*x)%mod + (2*b*y)%mod + (3*z*c)%mod + (6*d*w)%mod)%mod;
	tmp.r2 = ((a*y)%mod+(x*b)%mod+(3*z*d)%mod+(3*c*w)%mod)%mod;
	tmp.r3 = ((a*z)%mod+(2*b*w)%mod+(c*x)%mod+(2*d*y)%mod)%mod;
	tmp.r6 = ((a*w)%mod+(b*z)%mod+(c*y)%mod+(d*x)%mod)%mod;
	return tmp;
}
A DC(A num, int n) {
	if(n==0) return {1, 0, 0, 0};
	A t = DC(num, n/2);
	if(n%2==0) return t*t;
	return t*t*num;
}
void solve() {
	int n;
	A num;
	cin >> num.r1 >> num.r2 >> num.r3 >> n >> mod; num.r6=0;
	A ans = DC(num, n);
	cout << ans.r1 << " " << ans.r2 << " " << ans.r3 << " " << ans.r6 << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int T;
	cin >> T;
	while(T--)
		solve();
	return 0;
}
