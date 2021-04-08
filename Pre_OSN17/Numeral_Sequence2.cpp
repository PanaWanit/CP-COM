#include<bits/stdc++.h>
using namespace std;
const int mxN = 5e4+1;
int numsq[mxN]={1}; // numsq store the start index of '1' each time it repeat
string a; // a store the largest sequence "12345678910......"
int main() {
	for(int i=1; i<mxN; i++) {
		a+=to_string(i);
		numsq[i] = numsq[i-1]+a.length();
	} // convert string & generate numsq using O(string length*mxN) size about ~ 5e5
	int t,k;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &k);
		int idx=(int)(upper_bound(numsq+1, numsq+mxN, k)-numsq)-1; //each query using O(logn) time
		printf("%c\n", a[k-numsq[idx]]);
	}
	return 0;
}
//numerical sequence @ codeforces 1216E(1) 
