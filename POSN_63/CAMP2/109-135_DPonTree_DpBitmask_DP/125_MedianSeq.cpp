#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5;
int a[mxN+100], qs[mxN+100], l[mxN+mxN+100], r[mxN+mxN+100];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,k,pos;
	cin >> n >> k;
	for(int i=1; i<=n; ++i) {
		cin >> a[i];
		if(a[i]==k) pos=i;
		else if(a[i]>k)
			qs[i] = qs[i-1]+1;
		else qs[i] = qs[i-1]-1;
		cout << qs[i] << " ";
	}
	cout << "\n";
	//cout << ans << "\n";
	return 0;
}

