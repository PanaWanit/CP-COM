#include<bits/stdc++.h>
using namespace std;
const int mxN = 300;
int a[mxN][mxN], t[mxN*mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,k,cnt=0;
	cin >> n >> k;
	for(int i=0; i<n*2+1; i++) {
		for(int j=0; j<n+i%2; j++)
			cin >> a[i][j];
	}
	for(int i=1; i<n*2+1; i+=2) {
		for(int j=0; j<n; j++) {
			t[cnt++]=3*a[i-1][j]+5*a[i][j]-3*a[i+1][j]-5*a[i][j+1];
		}
	}
	sort(t, t+cnt);
	int sum=0;
	for(int i=0; i<k; i++) 
		sum += t[i];
	cout << sum << "\n";
	return 0;
}
