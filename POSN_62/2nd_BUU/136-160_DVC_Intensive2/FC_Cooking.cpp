#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using db = double;
const int mxN = 12;
int a[mxN], b[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,mn=1e9;
	cin >> n;
	for(int i=0; i<n; i++)
		cin >> a[i] >> b[i];
	for(int i=1; i<32; i++) {
		int S=1, B=0;
		for(int j=0; j<n; j++) {
			if(i&(1<<j)) S*=a[j], B+=b[j];
		}
		mn = min(mn, abs(S-B));
	}
	cout << mn << "\n";
	return 0;
}
