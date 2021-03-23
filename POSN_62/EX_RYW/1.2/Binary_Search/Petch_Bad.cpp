#include<bits/stdc++.h>
using namespace std;
const int mxN = 5e5+1;
int a[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,b;
	cin >> n >> b;
	for(int i=0; i<n; ++i) {
		cin >> a[i];
	}
	int lb=1, rb=*max_element(a, a+n);
	while(lb < rb) {
		int mb = (lb+rb)/2, sum=0;
		for(int i=0; i<n; ++i)
			sum += a[i]/mb+(a[i]%mb==0?0:1);
		if(sum>b) lb=mb+1;
		else rb=mb;
	}
	cout << lb << "\n";
	return 0;
}
