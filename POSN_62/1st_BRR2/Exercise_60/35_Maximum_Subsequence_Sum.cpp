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
	int n,sum=0,mx=-2e9,st=0,as,ae,ch=0;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> a[i];
		sum += a[i];
		if(sum > 0) ch=1;
		if(sum > mx) {
			mx = sum;
			as=st;
			ae=i;
		}
		if(sum < 0) {
			st=i+1;
			sum=0;
		}
	}
	if(!ch) cout << "Empty sequence\n";
	else cout << as+1 << " " << ae+1 << "\n" << mx << "\n";
	return 0;
}
