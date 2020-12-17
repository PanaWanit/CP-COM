#include<bits/stdc++.h>
using namespace std;
const int mxN = 1001;
int a[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=0; i<n; i++)
		cin >> a[i];
	sort(a, a+n);
	int sum=0,ans=0;
	for(int i=0; i<n; i++) {
		sum += a[i];
		ans += sum*2;
	}
	cout << ans << "\n";
	return 0;
}
