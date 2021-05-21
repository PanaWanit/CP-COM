#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mxN = 1e5+10;
ll a[mxN], l[mxN], r[mxN], idx[mxN],nidx[mxN],mem[mxN];
void msl(int lb, int rb) {
	if(lb==rb) return;
	int mb = (lb+rb)/2;
	msl(lb, mb), msl(mb+1, rb);
	int i=lb, j=mb+1, k=lb;
	while(i<=mb&&j<=rb) {
		if(a[j]<a[i]) {
			l[idx[j]]+=mb-i+1;
			nidx[k]=idx[j];
			mem[k++]=a[j++];
		}
		else {
			r[idx[i]]+=j-mb-1;
			nidx[k]=idx[i];
			mem[k++]=a[i++];
		}
	}
	while(i<=mb) {
		r[idx[i]]+=rb-mb;
		nidx[k]=idx[i];
		mem[k++]=a[i++];
	}
	while(j<=rb) {
		nidx[k]=idx[j];
		mem[k++]=a[j++];
	}
	for(int i=lb; i<=rb; ++i)
		a[i] = mem[i], idx[i]=nidx[i];
}
void query() {
	int n;
	cin >> n;
	for(int i=1; i<=n; ++i)
		cin >> a[i], idx[i]=i;
	msl(1, n);
	ll ans=0ll;
	for(int i=1; i<=n; ++i)
		ans += (ll)(l[i]*r[i]), l[i]=r[i]=0;
	cout << ans << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int Q;
	cin >> Q;
	while(Q--)
		query();
	return 0;
}
