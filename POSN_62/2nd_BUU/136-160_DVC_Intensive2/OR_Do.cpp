#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using db = double;
const int mxN = 1e5+1;
int qs[32][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,t;
	cin >> n >> t;
	for(int i=1,x; i<=n; i++) {
		cin >> x;
		for(int j=0; j<32; j++) 
			qs[j][i] = qs[j][i-1] + (x&(1<<j));
	}
	while(t--) {
		int l,r,sum=0;
		cin >> l >> r;
		for(int i=0; i<32; i++)
			if(qs[i][r]-qs[i][l-1]>0)
				sum += (1<<i);
		cout << sum << "\n";
	}
	return 0;
}
