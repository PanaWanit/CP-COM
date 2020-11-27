#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,h,mx=0,x;
	scanf("%d %d",&n,&h);
	while(n--) {
		scanf("%d",&x);
		if(x <= h) mx = max(mx,x);
	}
	printf("%d\n",mx);
	return 0;
}
