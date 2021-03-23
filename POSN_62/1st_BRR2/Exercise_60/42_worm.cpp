/*
 	TASK : worm
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+1;
pair<double, double> a[mxN];
int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int n;
	cin >> n;
	for(int i=0; i<n; i++)
		cin >> a[i].first >> a[i].second;
	sort(a, a+n,[](const auto& a, const auto& b) {
			return a.second < b.second;
			});
	double sum=0, mx=0, e=0, ans=0;
	for(int i=0; i<n; i++) {
		sum += a[i].first;
		if(mx < sum/a[i].second) {
			mx = sum/a[i].second;
			ans = sum, e = a[i].second;
		}
	}
	cout << ans << " " << e << "\n";
	return 0;
}
