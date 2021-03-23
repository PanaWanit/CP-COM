#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+1;
int used[mxN], c[mxN], a[mxN];
void solve() {
	int n,k,ch=0;
	cin >> n >> k;
	for(int i=0; i<n; ++i)
		cin >> a[i] >> c[i];
	int lb=*min_element(a, a+n), rb=1<<21, co=1;
	while(lb<rb) {
		int mb = (lb+rb)/2,cnt=1,box=mb;
		for(int i=0; i<n; ++i) {
			if(used[c[i]]==co||box-a[i]<0) box=mb-a[i], used[c[i]]=++co, cnt++;
			else box-=a[i], used[c[i]]=co;
		}
		++co;
		if(cnt>k) lb=mb+1;
		else rb=mb,ch=1;
	}
	memset(used, 0, sizeof(used));
	cout << (ch?lb:-1) << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}
