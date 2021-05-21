#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+10;
const double INF=1e9;
struct point {
	double x,y;
} a[mxN];
auto cmpX = [](const point& a, const point& b) {return a.x<b.x;};
auto cmpY = [](const point& a, const point& b) {return a.y<b.y;};
double dist(point a, point b) {
	return sqrt(1.0*(a.x-b.x)*(a.x-b.x)+1.0*(a.y-b.y)*(a.y-b.y));
}
double closet(int l, int r) {
	if(r-l+1<=3) {
		double mn = INF;
		for(int i=l; i<=r; i++) {
			for(int j=i+1; j<=r; j++)
				mn = min(mn, dist(a[i], a[j]));
		}
		return mn;
	}
	int m=(l+r)/2;
	double d = min(closet(l, m), closet(m+1, r)); // dL = closet(l->m), dR = closet(m+1->r); finding min
	vector<point> strip;
	for(int i=l; i<=r; i++) {
		if(abs(a[i].x-a[m].x)<d)
			strip.push_back(a[i]);
	}
	sort(strip.begin(), strip.end(), cmpY);
	int sz=(int)strip.size();
	for(int i=0; i<sz; i++) {
		for(int j=i+1; j<sz && strip[j].y-strip[i].y<=d; j++)
			d=min(d, dist(strip[i], strip[j]));
	}
	return d;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=0; i<n; i++)
		cin >> a[i].x >> a[i].y;
	sort(a, a+n, cmpX);
	cout << closet(0, n-1) << "\n";
	return 0;
}

