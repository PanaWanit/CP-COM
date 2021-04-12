#include<bits/stdc++.h>
using namespace std;
const int mxN = 5e5+1000;
int a[mxN];
int main() {
	int n,m,st_idx=0,dir=1;
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; ++i)
		scanf("%d", &a[i]);
	while(m--) {
		char opr;
		scanf(" %c", &opr);
		if(opr=='q') {
			int x;
			scanf("%d", &x); --x;
			printf("%d\n", a[(st_idx+x*dir+n)%n]);
		}
		if(opr == 'a') {
			int x,y;
			scanf("%d %d", &x, &y); --x,--y;
			swap(a[(st_idx+x*dir+n)%n], a[(st_idx+y*dir+n)%n]);
		}
		if(opr == 'b') {
			int x,k;
			scanf("%d %d", &x, &k); --x;
			a[(st_idx+x*dir+n)%n]=k;
		}
		if(opr == 'c') {
			int x;
			scanf("%d", &x);
			--x;
			st_idx=(st_idx+x*dir+n)%n;
			dir*=-1;
		}
	}
	return 0;
}

