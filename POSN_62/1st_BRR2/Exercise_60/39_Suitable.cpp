/*
 	TASK : Suitable
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 801;
int a[mxN], b[mxN];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n;
	cin >> n;
	for(int i=0; i<n; i++) 
		cin >> a[i];
	for(int j=0; j<n; j++)
		cin >> b[j];
	sort(a, a+n);
	sort(b, b+n);
	int sum=0;
	for(int i=0; i<n; i++)
		sum += a[i]*b[i];
	cout << sum << "\n";
	return 0;
}
