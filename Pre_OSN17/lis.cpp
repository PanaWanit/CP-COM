#include<bits/stdc++.h>
using namespace std;
vector<int> lis, g[1001],ans;
int main() {
	int n;
	scanf("%d", &n);
	while(n--) {
		int x;
		scanf("%d", &x);
		int idx = lower_bound(lis.begin(), lis.end(), x)-lis.begin();
		if(idx==(int)lis.size()) lis.push_back(x);
		else lis[idx]=x;
		g[idx].push_back(x);
	}
	int lis_sz = (int)lis.size();
	printf("%d\n", lis_sz);
	--lis_sz;
	ans.push_back(g[lis_sz][0]);
	for(int i=lis_sz-1; i>=0; i--) {
		for(auto& x : g[i]) {
			if(x<ans.back()) {
				ans.push_back(x);
				break;
			}
		}
	}
	for(int i=lis_sz; i>=0; i--)
		printf("%d ", ans[i]);
	printf("\n");
	return 0;
}
