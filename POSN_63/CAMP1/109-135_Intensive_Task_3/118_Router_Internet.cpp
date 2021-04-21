#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+10;
int a[mxN], b[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int m,n;
	cin >> m >> n;
	for(int i=0; i<n; ++i)
		cin >> a[i], a[i]*=10;
	int lb=0, rb=*max_element(a, a+n)+1;
	sort(a, a+n);
	while(lb<rb) {
		int mb=(lb+rb)/2;
		int st=a[0]+mb, cnt=1;
		for(int i=1; i<n; ++i) {
			if(abs(a[i]-st)>mb)
				st=a[i]+mb, ++cnt;
		}
		if(cnt>m) lb=mb+1;
		else rb=mb;
	}
	cout << lb/10 << "." << lb%10 << "\n";
	return 0;
}

