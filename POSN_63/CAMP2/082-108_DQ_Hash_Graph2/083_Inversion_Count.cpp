#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+10;
int a[mxN],b[mxN];
long long cnt=0;
void merge_sort(int lb, int rb) {
	if(lb==rb) return;
	int mb = (lb+rb)/2;
	merge_sort(lb, mb), merge_sort(mb+1, rb);
	int i=lb, j=mb+1, k=lb;
	while(i<=mb&&j<=rb) {
		if(a[i]<=a[j]) 
			b[k++] = a[i++];
		else cnt+=(mb-i+1), b[k++] = a[j++];
	}
	while(i<=mb)
		b[k++] = a[i++];
	while(j<=rb)
		b[k++] = a[j++];
	for(int i=lb; i<=rb; ++i)
		a[i] = b[i];
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=1; i<=n; ++i)
		cin >> a[i];
	merge_sort(1, n);
	cout << cnt << "\n";
	return 0;
}
