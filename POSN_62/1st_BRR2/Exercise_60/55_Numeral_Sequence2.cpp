#include<bits/stdc++.h>
using namespace std;
const int mxN = 5e4+1;
int numsq[mxN]={1};
string a; 
int main() {
	for(int i=1; i<mxN; i++) {
		a+=to_string(i);
		numsq[i] = numsq[i-1]+a.length();
	} 
	int t,k;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &k);
		int idx=(int)(upper_bound(numsq+1, numsq+mxN, k)-numsq)-1; 
		printf("%c\n", a[k-numsq[idx]]);
	}
	return 0;
}
