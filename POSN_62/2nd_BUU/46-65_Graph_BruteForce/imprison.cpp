#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ar array
#define vt vector
#define FOE(x, a) for(auto& x: a)
int x[10], y[10],ans[10];
template<class A> bool umin(A& x, const A& y) {
	return x>y? x=y, 1:0;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int r, c, p;
	cin >> r >> c >> p;
	for(int i=0; i<p ;i++) 
		cin >> x[i] >> y[i];
	for(int i=1; i<=r; i++) {
		for(int j=1; j<=c; j++) {
			int mn = INT_MAX, now=0;
			for(int k=0; k<p; k++) {
				if(umin(mn, abs(i-x[k])+abs(j-y[k]))) {
					now = k;
				}
			}
			++ans[now];
		}
	}
	for(int i=0; i<p; i++)
		cout << ans[i] << "\n";
	return 0;
}
