#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,t,a,b;
	scanf("%d",&n);
	t=n;
	while(t--) {
		scanf("%d %d",&a,&b);
		if(a < 100 || a > 750 || b < 80) n--;
	}
	printf("%d",n);
	return 0;
}
