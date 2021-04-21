#include<bits/stdc++.h>
using namespace std;
int n,r,k,cnt=0;
int a[15];
void combi(int st=0, int last=1) {
	if(st==r) {
		++cnt;
		if(cnt!=k)
			return;
		for(int i=0; i<r; ++i)
			cout << a[i] << " ";
		cout << "\n";
		exit(0);
	}
	for(int i=last; i<=n; ++i) {
		a[st]=i;
		combi(st+1, i+1);
	}
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	cin >> n >> r >> k;
	combi();
	return 0;
}
