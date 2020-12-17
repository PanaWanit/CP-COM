/*
 	TASK : triangle
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5;
int a[mxN];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n;
	cin >> n;
	if(n<3) {
		cout << "no\n";
		return 0;
	}
	for(int i=0; i<n; i++)
		cin >> a[i];
	sort(a, a+n);
	cout << (a[0]+a[1]>a[n-1]?"no":"yes") << "\n";
	return 0;
}
