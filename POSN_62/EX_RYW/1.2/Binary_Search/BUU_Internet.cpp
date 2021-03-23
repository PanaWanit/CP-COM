#include<bits/stdc++.h>
using namespace std;
const int mxN = 102;
int a[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m;
	cin >> m >> n;
	for(int i=0; i<n; ++i)
		cin >> a[i];
	int lb=*min_element(a, a+n), rb=1<<21;
	while(lb < rb) {
		int mb = (lb+rb)/2, box = mb, cnt=1;
		for(int i=0; i<n; i++) {
			if(box-a[i]>=0) box-=a[i];
			else box = mb-a[i], cnt++;
		}
		if(cnt>m) lb=mb+1;
		else rb=mb;
	}
	cout << lb << "\n";
	return 0;
}
