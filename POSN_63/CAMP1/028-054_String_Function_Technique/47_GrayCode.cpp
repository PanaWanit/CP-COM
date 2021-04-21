#include<bits/stdc++.h>
using namespace std;
int n,a[20];
void permu(int st=0) {
	if(st==n) {
		cout << a[0];
		for(int i=1; i<n; ++i)
			cout << (a[i]^a[i-1]);
		cout << "\n";
		return;
	}
	a[st]=0;
	permu(st+1);
	a[st]=1;
	permu(st+1);
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--)
		cin >> n, permu();
	return 0;
}
