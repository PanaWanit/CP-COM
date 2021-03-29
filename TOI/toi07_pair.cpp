#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+100;
pair<int,int> a[mxN], mem[mxN];
double ans=0, qs[mxN];
void merge_sort(int lb, int rb) {
	if(lb==rb) return;
	int mb=(lb+rb)/2;
	merge_sort(lb, mb), merge_sort(mb+1, rb);
	int pl=lb, pr=mb+1, pall=lb;
	qs[mb]=a[mb].first;
	for(int i=mb-1; i>=lb; --i)
		qs[i]=qs[i+1]+a[i].first;
	while(pl<=mb&&pr<=rb) {
		if(a[pl].first <= a[pr].first) mem[pall++]=a[pl++];
		else {
			ans += (mb-pl+1)*a[pr].first + qs[pl];
			mem[pall++]=a[pr++];
		}
	}
	while(pl<=mb)
		mem[pall++]=a[pl++];
	while(pr<=rb)
		mem[pall++]=a[pr++];
	for(int i=lb; i<=rb; i++)
		a[i] = mem[i];
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=0; i<n; ++i)
		cin >> a[i].first >> a[i].second;
	sort(a, a+n, [](const auto& a, const auto& b) {return a.second < b.second;});
	merge_sort(0, n-1);
	cout << fixed << setprecision(0) << ans << "\n";
	return 0;
}
