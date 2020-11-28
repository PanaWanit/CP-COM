#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,l,mn=2e9;
	scanf("%d %d",&n,&l);
	while(n--) {
		int od,nw;
		scanf("%d",&od);
		int mx = od;
		for(int i=l-1; i--;) {
			scanf("%d",&nw);
			mx = max(mx,nw-od);
			od = nw;
		}
		mn = min(mn,mx);
	}
	printf("%d",mn);
	return 0;
}
