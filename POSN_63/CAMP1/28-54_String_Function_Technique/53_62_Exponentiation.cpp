#include<bits/stdc++.h>
using namespace std;
int a[6000];
void solve() {
	a[mxN-1]=1;
	int base, expo, tod=0,i;
	cin >> base >> expo;
	if(base==0) {
		cout << 0 << "\n";
		return;
	}
	while(expo--) {
		for(int i=mxN-1; i>=0; --i) {
			a[i] = a[i]*base+tod;
			tod=a[i]/10, a[i]%=10;
		}
	}
	for(i=0;!a[i]; ++i);
	for(; i<mxN; ++i)
		cout << a[i];
	cout << "\n";
	memset(a, 0, sizeof(a));
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}
