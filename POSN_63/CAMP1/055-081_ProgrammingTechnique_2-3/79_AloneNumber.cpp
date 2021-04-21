#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+10;
struct A {
	int num, idx;
	bool operator < (const A& o) const {
		if(num!=o.num) return num < o.num;
		return idx<o.idx;
	}
} a[mxN];
struct B {
	int num, idx;
	bool operator < (const B& o) const {
		return idx<o.idx;
	}
} b[mxN];
void solve() {
	int n,cnt=0;
	scanf("%d", &n);
	for(int i=0; i<n; ++i) {
		scanf("%d", &a[i].num), a[i].idx=i;
	}
	sort(a, a+n);
	a[n]={0, 0};
	for(int i=1,s=0,mn=a[0].idx; i<=n; ++i) {
		if(a[i].num!=a[i-1].num) {
			if(s==0) 
				b[cnt++]={a[i-1].num, mn};
			mn=a[i].idx;
			s=0;
		}
		else ++s;
	}
	if(!cnt) {
		printf("No Alone Num\n");
		return;
	}
	sort(b, b+cnt);
	for(int i=0; i<cnt; ++i) 
		printf("%d ", b[i]);
	printf("\n");
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--)
		solve();
	return 0;
}
