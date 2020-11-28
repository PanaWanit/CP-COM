/*
	TASK : KU01-1st-bird
	AUTHOR : Pana Wanit
	LANG : C++
*/
#include<bits/stdc++.h>
using namespace std;
int a[1000];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,cnt=0;
	cin >> n;
	for(int i=0; i<n; i++) cin >> a[i];
	cnt += (a[0] > a[1]) + (a[n-1] > a[n-2]);
	for(int i=1; i<n-1; i++) {
		cnt += (a[i] > a[i-1] && a[i] > a[i+1]);
	}
	cout << cnt << "\n";
	return 0;
}
