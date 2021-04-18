#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+10, range = 4e6+100, mxH = 1e6;
int n, h[mxN];
struct swl {
	int h,o,idx;
	bool operator < (const swl& o) const {
		return idx<o.idx;
	}
} sw;
struct ft {
	int a[mxN];
	void upd(int i,int val) {
		for(; i<=mxH; i+=i&-i)
			a[i]+=val;
	}
	int qry(int i) {
		int sum=0;
		for(; i>0; i-=i&-i)
			sum += a[i];
		return sum;
	}
} f;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> n >> t;
	for(int i=0; i<n; ++i) {
		int S,H,W,O;
		cin >> S >> H >> W >> O;
		swl[i] = {H, O, S};
		swl[n+i] = {H, O, S+W-1};
	}
	sort(swl, swl+n*2);

	return 0;
}
