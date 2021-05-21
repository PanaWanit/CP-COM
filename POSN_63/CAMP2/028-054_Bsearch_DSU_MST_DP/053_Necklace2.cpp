#include<bits/stdc++.h>
using namespace std;
const int mxN=2e5+10;
int LR[mxN], LB[mxN], RR[mxN], RB[mxN];
string a,s;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n >> s;
	a=" " +s+s;
	for(int i=1; i<=2*n; ++i) {
		if(a[i]=='w') LR[i]=LR[i-1]+1, LB[i]=LB[i-1]+1;
		else if(a[i]=='b') LB[i]=LB[i-1]+1, LR[i]=0;
		else LR[i]=LR[i-1]+1, LB[i]=0;
	}
	for(int i=2*n; i>=1; --i) {
		if(a[i]=='w') RR[i]=RR[i+1]+1, RB[i]=RB[i+1]+1;
		else if(a[i]=='b') RB[i]=RB[i+1]+1, RR[i]=0;
		else RR[i]=RR[i+1]+1, RB[i]=0;
	}
	int mx=0;
	for(int i=1; i<=n; ++i) {
		mx = max({mx, LR[i]+RB[i+1], LB[i]+RR[i+1]});
	}
	cout << min(mx, n) << "\n";
	return 0;
}

