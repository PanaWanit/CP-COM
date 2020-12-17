/*
 	TASK : Influenza
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5;
int a[mxN], b[mxN];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n;
	cin >> n;
	for(int i=0; i<n; i++)
		cin >> a[i];
	for(int i=0; i<n; i++)
		cin >> b[i];
	sort(a, a+n);
	sort(b, b+n, greater<int>());
	int mx=0;
	for(int i=0; i<n; i++)
		mx = max(mx, min(a[i], b[i]));
	cout << mx << "\n";
	return 0;
}
