#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e8;
void solve() {
	int n,k;
	cin >> n;
	int tmp=n, sz=sqrt(n);
	for(int i=2; i<=sz; i++) {
		k=0;
		n=tmp;
		if(n%i!=0)
			continue;
		while(n!=1) {
			int sq=sqrt(n);
			if(sq*sq==n&&sq%i!=0) break;
			else if(n%i==0)
				n/=i, k++;
			else break;
		}
		if(n==1) {
			cout << k << "\n";
			return;
		}
	}//cerr << endl;
	cout << "NO\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}
