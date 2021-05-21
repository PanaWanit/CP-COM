#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mxN = 1e5+10;
pair<int,int> tmp[mxN];
ll a[mxN],ans=0,b[mxN],qs[mxN];
void merge_sort(int lb, int rb) {
	if(lb==rb) return;
	int mb = (lb+rb)/2;
	merge_sort(lb, mb), merge_sort(mb+1, rb);
	int i=lb, j=mb+1, k=lb;
	qs[lb-1]=0;
	for(int i=lb; i<=mb; ++i)
		qs[i]=qs[i-1]+a[i];
	while(i<=mb&&j<=rb) {
		if(a[i]>a[j])
			ans += (qs[mb]-qs[i-1])+(mb-i+1)*a[j], b[k++]=a[j++];
		else b[k++]=a[i++];
	}
	while(i<=mb)
		b[k++]=a[i++];
	while(j<=rb)
		b[k++]=a[j++];
	for(int i=lb; i<=rb; ++i)
		a[i]=b[i];
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=1; i<=n; ++i)
		cin >> tmp[i].second >> tmp[i].first;
	sort(tmp+1, tmp+n+1);
	for(int i=1; i<=n; ++i)
		a[i]=tmp[i].second;
	merge_sort(1, n);
	cout << ans << "\n";
	return 0;
}
