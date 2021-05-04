#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+10;
pair<double, double> a[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	cout << fixed << setprecision(3);
	for(int i=0; i<n; ++i) {
		double p,w;
		cin >> p >> w;
		a[i]={p/w, w};
	}
	int q,p=0;
	sort(a, a+n);
	for(cin >> q; q--;) {
		double b,ans=0;
		cin >> b;
		while(b) {
			if(b>a[p].second) {
				b-=a[p].second;
				ans+=a[p].first*a[p].second;
				++p;
			}
			else {
				a[p].second-=b;
				ans+=a[p].first*b;
				b=0;
			}
		}
		cout << ans << "\n";
	}
	return 0;
}

