#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e4+10;
int kmp[mxN];
int KMP(string& a, string& b) {
	int n = a.size(), m = b.size(),j=0;
	for(int i=2; i<=m; ++i) {
		while(j>0 && b[i]!=b[j+1]) j=kmp[j];
		if(b[i]==b[j+1]) ++j;
		kmp[i]=j;
	}
	j=0;
	for(int i=1; i<=n; ++i) {
		if(j>0 && a[i]!=b[j+1]) j=kmp[j];
		if(a[i]==b[j+1]) ++j;
		if(j==m) return i-m+1;
	}
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	string t = " ABABDABACDABABCABAB", p = " ABABCABAB"; // idx start at 1
	cout << KMP(t, p) << "\n";
	return 0;
}

