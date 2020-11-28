#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,ans=0;
	double a,b;
	scanf("%d",&n);
	while(n--) {
		scanf("%lf %lf", &a, &b);
		if(a*0.75 >= b) ans += 5;
		else ans += 3;
	}
	printf("%d", ans);
	return 0;
}
