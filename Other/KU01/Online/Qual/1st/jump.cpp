#include<bits/stdc++.h>
using namespace std;
char a[100];
int main() {
	int n,ans=1e9,ch=0;
	scanf("%d %s",&n, a);
	for(int i=1; i<n-1; i++) {
		if(a[i] == '#')	ans = min(ans,max(i,n-i-1)),ch=1;
	}
	printf("%d\n", (ch==0?n:ans));
	return 0;
}
