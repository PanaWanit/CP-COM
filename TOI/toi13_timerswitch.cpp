#include<bits/stdc++.h>
using namespace std;
const int mxN = 5e6+10;
string a;
int kmp[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,j=0;
	cin >> n >> a;
	a=" "+a;
	for(int i=2; i<=n; ++i) {
		while(j>0&&a[i]!=a[j+1]) j=kmp[j];
		if(a[i]==a[j+1]) ++j;
		kmp[i]=j;
	}
	a=a+a.substr(1), j=0;
	for(int i=2; i<=2*n; ++i) {
		while(j>0&&a[i]!=a[j+1]) j=kmp[j];
		if(a[i]==a[j+1]) ++j;
		if(j==n) {
			cout << i-j << "\n";
			return 0;
		}
	}
	return 0;
}

