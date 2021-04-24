#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+10;
int s[mxN], h[mxN], mem[2][mxN];
bool umax(int& a, int b) {
	return a<b?a=b, 1:0;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=0; i<n; ++i) {
		cin >> s[i] >> h[i];
	}
	memcpy(mem[0], s, 4*n);
	memcpy(mem[1], h, 4*n);
	int st=n-1, cnt=1, mx = -2e9,dir=1,ans=1;
	cnt=1, st=0;
	for(int i=0; i<n-1; ++i) {
		int d = s[i+1]-s[i];
		if(d>=h[i]) {
			if(umax(mx, cnt)) {
				dir=0;
				ans=st+1;
			}
			st=i+1;
			cnt=1;
			continue;
		}
		++cnt;
		h[i+1] = max(h[i]-d, h[i+1]);
	}
	if(umax(mx, cnt)) {
		dir=0;
		ans=st+1;
	}
	memcpy(s, mem[0], 4*n);
	memcpy(h, mem[1], 4*n);
	st=n-1, cnt=1;
	for(int i=n-1; i>0; --i) {
		int d = s[i]-s[i-1];
		if(d>=h[i]) {
			if(mx==cnt && ans==st+1 && dir==0) dir=1;
			if(umax(mx, cnt)) {
				dir=1;
				ans=st+1;
			}
			st=i-1;
			cnt=1;
			continue;
		}
		++cnt;
		h[i-1] = max(h[i]-d, h[i-1]);
	}
	if(mx==cnt && ans==st+1 && dir==0) dir=1;
	if(umax(mx, cnt)) {
		dir=1;
		ans=st+1;
	}
	cout << ans << " " << (dir?"L":"R") << "\n";
	return 0;
}

