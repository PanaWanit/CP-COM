#include<bits/stdc++.h>
using namespace std;
char* prime_check(int n) {
	if(n%2==0) return "No";
	for(int i=3; i<=sqrt(n); i+=2)
		if(n%i==0) return "No";
	return "Yes";
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%s\n", prime_check(n));
	return 0;
}

