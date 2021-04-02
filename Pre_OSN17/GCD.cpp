#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
	if(a%b==0) return b;
	return gcd(b, a%b);
}
int main() {
	int n,a,b;
	scanf("%d %d", &n, &a);
	while(--n) {
		scanf("%d", &b);
		a = gcd(a, b);
	}
	printf("%d\n", a);
	return 0;
}

