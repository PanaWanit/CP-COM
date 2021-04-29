#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+100;
struct point {
	int x,y;
} a[mxN];
bool cmpx(const point& a, const point& b) {
	return a.x < b.x;
}
bool cmpy(const point& a, const point& b) {
	return a.y < b.y;
}
double dis(point a, point b) {
	return sqrt(1.0*(a.x-b.x)*(a.x-b.x) + 1.0*(a.y-b.y)*(a.y-b.y));
}
double closet(int lb, int rb) {
	double d=2e9;
	if(rb-lb+1<=3) {
		for(int i=lb; i<=rb; ++i) {
			for(int j=i+1; j<=rb; ++j)
				d=min(d, dis(a[i], a[j]));
		}
		return d;
	}
	int mb = (lb+rb)/2;
	double dl = closet(lb, mb), dr = closet(mb+1, rb);
	d = min(dl, dr);
	vector<point> strip;
	for(int i=lb; i<=rb; ++i) {
		if(abs(a[i].x-a[mb].x)<d)
			strip.push_back(a[i]);
	}
	int n = strip.size();
	sort(strip.begin(), strip.end(), cmpy);
	for(int i=0; i<n; ++i) {
		for(int j=i+1; j<n && strip[j].y - strip[i].y<d; ++j) {
			d=min(d, dis(strip[i], strip[j]));
		}
	}
	return d;
}
void solve() {
	int n;
	double d,r;
	cin >> n >> r >> d;
	for(int i=0; i<n; ++i)
		cin >> a[i].x >> a[i].y;
	sort(a, a+n, cmpx);
	double dist=closet(0, n-1);
	if(dist-2*r>=d) cout << "Y\n";
	else cout << "N\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}

