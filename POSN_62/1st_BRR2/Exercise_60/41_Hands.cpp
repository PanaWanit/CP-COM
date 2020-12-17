/*
 	TASK : Hands
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 2001;
int a[mxN];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,m,sum=0;
	cin >> n >> m;
	for(int i=0; i<n; i++)
		cin >> a[i];
	sort(a, a+n, greater<int>());
	for(int i=0; i<n; i+=m) {
		sum += a[i];
	}
	cout << sum << "\n";
	return 0;
}
