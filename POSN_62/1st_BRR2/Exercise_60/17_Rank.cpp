/*
 	TASK : Rank
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 2e5;
int a[mxN], b[mxN];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,m;
	cin >> n >> m;
	for(int i=0; i<n; i++)
		cin >> a[i];
	while(m--) {
		int x;
		cin >> x;
		cout << (n+1-(upper_bound(a, a+n, x)-a)) << "\n";
	}
	return 0;
}
