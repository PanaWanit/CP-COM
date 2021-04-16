#include<bits/stdc++.h>
using namespace std;
const int mxN = 2e4+10;
string a[mxN],b;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,t,k;
	cin >> n >> t >> k;
	for(int i=0; i<n; ++i)
		cin >> a[i];
	sort(a, a+n);
	while(t--) {
		cin >> b;
		if(*lower_bound(a, a+n, b)==b)
			printf("Accepted\n");
		else printf("Rejected\n");
	}
	return 0;
}
