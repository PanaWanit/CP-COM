#include<bits/stdc++.h>
using namespace std;
const int mxN = 2e5+10;
int a[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,st=0,sum=0,end=0,mx=-2e9,ansi=0, ansj=0;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> a[i];
		sum+=a[i];
		if(sum>mx) {
			mx=sum;
			end=i;
			ansi=st, ansj=end;
		}
		if(sum<0) {
			sum=0;
			st=i+1,end=i+1;
		}
	}
	cout << ansi+1 << " " << ansj+1;
	cout << "\n" << mx << "\n";
	return 0;
}
