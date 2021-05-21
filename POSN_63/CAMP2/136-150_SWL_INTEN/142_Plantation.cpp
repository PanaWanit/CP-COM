#include<bits/stdc++.h>
using namespace std;
#define sz(x) (int)(x).size()
const int mxN = 1e5+10;
struct T {
	int x,y;
} a[mxN];
bool x_sort(const T &a, const T &b) {
	return a.x<b.x;
}
bool y_sort(const T &a, const T &b) {
	return a.y<b.y;
}
double dis(const T &a, const T &b) {
	return sqrt(1.0*(a.x-b.x)*(a.x-b.x)+1.0*(a.y-b.y)*(a.y-b.y));
}
double closet(int lb, int rb) {
	if(rb-lb+1<=3) {
		double d=2e9;
		for(int i=lb; i<rb; ++i) {
			for(int j=i+1; j<=rb; ++j) {
				d=min(d, dis(a[i], a[j]));
			}
		}
		return d;
	}
	int mb = (lb+rb)/2;
	double d = min(closet(lb, mb), closet(mb+1, rb));
	vector<T> strip;
	for(int i=lb; i<=rb; ++i) {
		if(abs(a[i].x-a[mb].x)<d)
			strip.push_back(a[i]);
	}
	sort(strip.begin(), strip.end(), y_sort);
	for(int i=0; i<sz(strip); ++i) {
		for(int j=i+1; j<sz(strip) && strip[j].y-strip[i].y<d; ++j)
			d=min(d, dis(strip[i], strip[j]));
	}
	return d;
}
void query() {
	int n;
	double r,d;
	cin >> n >> r >> d;
	for(int i=0; i<n; ++i)
		cin >> a[i].x >> a[i].y;
	sort(a, a+n, x_sort);
	double cs = closet(0, n-1);
	if(cs-2*r>=d) cout << "Y\n";
	else cout << "N\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int Q;
	cin >> Q;
	while(Q--)
		query();
	return 0;
}

