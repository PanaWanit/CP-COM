#include<bits/stdc++.h>
using namespace std;
#define matrix array<array<int,6>, 6>
using ll = long long;
matrix a;
ll mod;
int n;
matrix mul(const matrix& a, const matrix& b) {
	matrix ans={};
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			for(int k=0; k<n; k++)
				ans[i][j] = (ans[i][j]+a[i][k]*b[k][j])%mod;
		}
	}
	return ans;
}
matrix modpower(matrix& m, ll b) {
	if(b==0) {
		matrix ans={};
		for(int i=0; i<n; i++)
			ans[i][i] = 1;
		return ans;
	}
	if(b==1) return a;
	matrix t = modpower(m, b/2);
	if(b%2==0) return mul(t, t);
	return mul(t, mul(t, a));
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	ll b;
	cin >> n;
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++) 
			cin >> a[i][j];
	cin >> b >> mod;
	matrix ans = modpower(a, b);
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++)
			cout << ans[i][j]%mod << " ";
		cout << "\n";
	}
	return 0;
}
