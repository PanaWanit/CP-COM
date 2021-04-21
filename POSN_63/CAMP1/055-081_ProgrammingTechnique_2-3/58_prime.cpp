#include<bits/stdc++.h>
using namespace std;
const int mxN = 8e6;
bool not_prime[mxN+1000];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	if(n==1) {
		cout << 2 << "\n";
		return 0;
	}
	for(int i=3; i<=sqrt(mxN); i+=2) {
		if(not_prime[i]) continue;
		for(int j=i*i; j<=mxN; j+=i)
			not_prime[j]=1;
	}
	int now=1;
	for(int i=3; i<=mxN; i+=2) {
		now += 1-not_prime[i];
		if(now==n) {
			cout << i << "\n";
			return 0;
		}
	}
	return 0;
}
