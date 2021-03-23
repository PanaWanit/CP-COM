#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e6+1;
int a[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,p;
	bool ch=0;
	cin >> n >> p;
	for(int i=0; i<n; ++i)
		cin >> a[i];
	int lb=0, rb=1<<21;
	while(lb<rb) {
		int mb = (lb+rb+1)/2, sum=0;
		for(int i=0; i<n; ++i)
			sum += a[i]/mb;
		if(sum==p)
			ch=1;
		if(sum>=p) lb=mb;
		else rb=mb-1;
	}
	cout << (ch?"YES\n":"NO\n") << lb << "\n";
	return 0;
}
