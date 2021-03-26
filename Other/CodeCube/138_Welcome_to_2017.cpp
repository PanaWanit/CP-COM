#include<bits/stdc++.h>
using namespace std;
const int mxN = 2021;
int a[mxN], freq[4005];
template<class A> bool umin(A& a, const A& b) {
	return a>b?a=b,1:0;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,mn=1e9,ans=-1;
	cin >> n;
	for(int i=0; i<n; ++i) {
		cin >> a[i];
		++freq[a[i]];
	}
	for(int i=0; i<n; ++i) {
		if(freq[a[i]]==1&&umin(mn, abs(2017-a[i]))) 
			ans=a[i];
	}
	cout << ans << "\n";
	return 0;
}

