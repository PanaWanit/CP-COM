/*
 	TASK : Maximum Subsequence Sum
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 2e5+1;
int a[mxN];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,sum=0,mx=-2e9,st=0,ed;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> a[i];
		sum += a[i];
		if(sum > mx) {
			mx = sum;
			ed=i;
		}
		if(sum < 0) {
			st=i+1;
			sum=0;
		}
	}
	cout << st+1 << " " << ed+1 << "\n" << mx << "\n";
	return 0;
}
