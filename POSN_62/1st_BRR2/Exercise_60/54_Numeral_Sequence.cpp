#include<bits/stdc++.h>
using ll = long long;
using namespace std;
char num[50];
int main() {
	int t;
	ll k;
	scanf("%d", &t);
	while(t--) {
		ll i=0,st=9;
		scanf("%lld", &k);
		if(k<10) {
			printf("%lld\n", k);
			continue;
		}
		while(k>st*pow(10,i)) {
			k-=st*pow(10, i);
			++i;
			st+=9; // 9 180 2700
		}
		ll n = k+(ll)pow(10, i)-1, diff = k-1;
		sprintf(num,"%lld",n-diff/(i+1)-diff%(i+1));
		printf("%c\n", num[diff%(i+1)]);
	}
	return 0;
}// my brain cell death now

