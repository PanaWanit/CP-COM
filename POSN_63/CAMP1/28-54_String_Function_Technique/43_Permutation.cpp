#include<bits/stdc++.h>
using namespace std;
int n,r,k,cnt=0;
int a[15], used[15];
void permu(int st=0) {
	if(st==r) {
		++cnt;
		if(cnt!=k) return;
		for(int i=0; i<r; ++i)
			cout << a[i] << " ";
		cout << "\n";
		exit(0);
	}
	for(int i=1; i<=n; ++i) {
		if(used[i]) continue;
		used[i]=1;
		a[st]=i;
		permu(st+1);
		used[i]=0;
	}
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	cin >> n >> r >> k;
	permu();
	return 0;
}
