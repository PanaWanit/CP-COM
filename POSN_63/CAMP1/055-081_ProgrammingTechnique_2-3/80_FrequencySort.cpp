#include<bits/stdc++.h>
using namespace std;
const int mxN = 1010;
struct A {
	int num,freq,idx;
	bool operator < (const A&o) const {
		if(freq!=o.freq) return freq>o.freq;
		return idx<o.idx;
	}
} a[mxN];
int main() {
	int n,c,cnt=0;
	scanf("%d %d", &n, &c);
	for(int i=0,x; i<n; ++i) {
		scanf("%d", &x);
		bool ch=1;
		for(int j=0; j<cnt; ++j) {
			if(x==a[j].num) ++a[j].freq,ch=0;
		}
		if(ch) a[cnt++]={x, 1, i};
	}
	sort(a, a+cnt);
	for(int i=0; i<cnt; ++i)
		for(int j=0; j<a[i].freq; ++j)
			printf("%d ", a[i].num);
	printf("\n");
	return 0;
}
