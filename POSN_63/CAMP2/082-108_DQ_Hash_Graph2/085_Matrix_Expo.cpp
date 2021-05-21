#include<bits/stdc++.h>
using namespace std;
#define ar array
#define T ar<ar<ll, 6>, 6>
#define ll long long
T a, p[70],ans;
ll b,c,n;
T operator*(const T& a, const T& b) {
	T tmp;
	for(int i=0; i<n; ++i) {
		for(int j=0; j<n; ++j) {
			tmp[i][j]=0;
			for(int k=0; k<n; ++k) {
				tmp[i][j] += a[i][k]*b[k][j];
				tmp[i][j]%=c;
			}
		}
	}
	return tmp;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	cin >> n;
	for(int i=0; i<n; ++i)
		for(int j=0; j<n; ++j)
			cin >> p[0][i][j];
	cin >> b >> c;
	if(b==0) {
		for(int i=0; i<n; ++i) {
			for(int j=0; j<n; ++j)
				cout << (i==j?1%c:0) << " ";
			cout << "\n";
		}
		return 0;
	}
	ans = p[0], --b;
	for(int i=1; i<=64; ++i)
		p[i]=p[i-1]*p[i-1];
	for(ll i=0; i<64&&b!=-1; ++i)
		if((1ll<<i)&b) ans=ans*p[i];
	for(int i=0; i<n; ++i) {
		for(int j=0; j<n; ++j)
			cout << ans[i][j]%c << " ";
		cout << "\n";
	}
	return 0;
}
