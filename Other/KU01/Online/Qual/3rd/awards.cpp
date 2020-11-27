#include<bits/stdc++.h>
using namespace std;
const int mxN = 301;
int qsa[mxN], qsb[mxN], qsza[mxN], qszb[mxN], space[mxN*2];
bool mark[mxN*2];
int main() {
	int n,x,p=1,mx=-1;
	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
		scanf("%d",&x);
		mark[x]=1;
		qsa[i] = qsa[i-1]+x;
		if(x == 0) qsza[i] = qsza[i-1] + 1;
	}
	for(int i=1; i<=n; i++) {
		scanf("%d",&x);
		mark[x]=1;
		qsb[i] = qsb[i-1]+x ;
		if(x == 0) qszb[i] = qszb[i-1] + 1;
	}
	for(int i=2*n; i>=1; i--) 
		if(!mark[i]) 
			space[p] = space[p-1] + i,p++;
	for(int i=1; i<=n; i++)
		mx = max(mx, qsa[i] + (qsb[n]-qsb[i-1]) + space[ qsza[i]+qszb[n]-qszb[i-1] ] );
	printf("%d\n",mx);
	return 0;
}
