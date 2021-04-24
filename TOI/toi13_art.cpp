#include<bits/stdc++.h>
using namespace std;

#define ar array

const int mxN = 1e6;
int n;
struct ft {
	int a[mxN+10];
	void upd(int i, int val) {
		for(; i<=mxN; i+=i&-i)
			a[i] += val;
	}
	int qry(int i) {
		int sum=0;
		for(; i>0; i-=i&-i)
			sum += a[i];
		return sum;
	}
	int _lb(int t) {
		int lb=0, rb=mxN;
		while(lb < rb) {
			int mb = (lb+rb+1)/2;
			if(qry(mb)<=t) rb=mb-1;
			else lb=mb;
		}
		return lb+1;
	}
	int _ub(int t) {
		int lb=0, rb=mxN;
		while(lb < rb) {
			int mb = (lb+rb+1)/2;
			if(qry(mb)<t) rb=mb-1;
			else lb=mb;
		}
		return lb+1;
	}
} f;

int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> n >> t;
	vector<ar<int, 3>> v; // [0]-> ev, [1] -> val , [2]->h
	for(int i=0; i<n; ++i) {
		int s,h,w,o;
		cin >> s >> h >> w >> o;
		v.push_back(ar<int,3>{s, o, h});
		v.push_back(ar<int, 3>{s+w, -o, h});
	}
	sort(v.begin(), v.end());
	int p=0,ans=0;
	for(int i=1; i<n*2; ++i) {
		while(v[i][0] == v[p][0]) {
			f.upd(1, v[i][1]);
			f.upd(v[i][2]+1, -v[i][1]);
			++i;
		}
		f.upd(1, v[p][1]);
		f.upd(v[p][2]+1, -v[p][1]);
		ans += (f._ub(t)-f._lb(t))*(v[i][0]-v[p][0]);
		p=i;
	}
	cout << ans << "\n";
	return 0;
}

