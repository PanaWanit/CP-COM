#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e6+100;
int a[mxN];
void solve() {
	int n,sum=0,mx=0;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> a[i];
		if(i%2==0) a[i]*=-1;
		sum+=a[i];
		if(sum>mx)
			mx=sum;
		if(sum<0)
			sum=0;
	}
	sum=0;
	for(int i=0; i<n; ++i)
		sum+=a[i];
	cout << sum-(2*mx) << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}

