#include<bits/stdc++.h>
using namespace std;
const int mxN = 8e6;
bool not_prime[mxN];
int main() {
	for(int i=3; i<=sqrt(mxN); i+=2) {
		if(not_prime[i]) continue;
		for(int j=i*i; j<=mxN; j+=i) {
			not_prime[j]=1;
		}
	}
	int n,cnt=1;
	scanf("%d", &n);
	if(n==1)
		cout << 2 << "\n";
	for(int i=3; i<=mxN; i+=2) {
		cnt+=1-not_prime[i];
		if(cnt==n) {
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}

