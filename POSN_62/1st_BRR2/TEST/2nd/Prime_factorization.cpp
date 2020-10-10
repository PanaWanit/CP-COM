/*
 	TASK : Prime Factorization
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e6;
bool used[mxN];
int prime[mxN]={2};
void find_prime(){
	int p=1;
	for(int i=3; i<=sqrt(mxN); i+=2){
		if(used[i]) continue;
		for(int j=i*i; j<=mxN; j+=i) used[j] = 1;
	}
	for(int i=3; i<=mxN; i+=2) if(!used[i]) prime[p++] = i;
}
int main(){
	//ios::sync_with_stdio(0),cin.tie(0);
	find_prime();
	int q;
	for(cin >> q; q--;){
		int n,p=0;
		cin >> n;
		while(n!=1){
			if(n%prime[p] == 0 && n/prime[p] == 1) cout << prime[p],n=1;
			else if(n%prime[p] == 0){
				n/=prime[p];
				cout << prime[p] << " x ";
			}
			else p++;
		}
		cout << "\n";
	}
	return 0;
}
