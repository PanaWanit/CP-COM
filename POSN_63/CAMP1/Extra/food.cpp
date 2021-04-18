#include<bits/stdc++.h>
using namespace std;
int n, NT[10], used[10], p[13];
void permu(int st=0) {
	if(st==n) {
		for(int i=0; i<n; ++i)
			printf("%d ", p[i]);
		printf("\n");
		return;
	}
	for(int i=1; i<=n; ++i) {
		if(st==0&&NT[i]) continue;
		if(used[i]) continue;
		used[i]=1;
		p[st]=i;
		permu(st+1);
		used[i]=0;
	}
}
int main() {
	int m;
	scanf("%d %d", &n, &m);
	while(m--) {
		int x;
		scanf("%d", &x);
		NT[x]=1;
	}
	permu();
	return 0;
}
