#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+10;
int used[mxN], a[mxN], c[mxN];
void query() {
	int n,k,used_mark=1;
	cin >> n >> k;
	for(int i=0; i<n; ++i)
		cin >> a[i] >> c[i];
	int lb=*max_element(a, a+n), rb=1e9+2, ch=0;
	while(lb<rb) {
		int mb=(lb+rb)/2, box=1, now=0;
		for(int i=0; i<n; ++i) {
			if(now+a[i]<=mb && used[c[i]]!=used_mark)
				now+=a[i], used[c[i]]=used_mark;
			else
				++box, now=a[i], used[c[i]]=++used_mark;
		}
		++used_mark;
		if(box>k) lb=mb+1;
		else rb=mb, ch=1;
	}
	cout << (ch?lb:-1) << "\n";
	memset(used, 0, sizeof(used));
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--)
		query();
	return 0;
}

