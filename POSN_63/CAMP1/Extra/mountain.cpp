#include<bits/stdc++.h>
using namespace std;
char a[15][150];
int main() {
	memset(a, '.', sizeof(a));
	int n,r=0, c=0;
	scanf("%d", &n);
	for(int k=0; k<n; ++k) {
		int h,s;
		scanf("%d %d", &s, &h);
		r=max(r, h);
		c=max(c, s+h*2-1);
		for(int i=0; i<h; ++i) {
			for(int j=s-1+i; j<s-1+i+2*h-2*i; j++) {
				if(a[i][j]=='X');
				else if(j==s-1+i) {
					if(a[i][j]=='\\') a[i][j]='v';
					else a[i][j]='/';
				}
				else if(j==s-2+i+2*h-2*i) {
					if(a[i][j]=='/') a[i][j]='v';
					else a[i][j]='\\';
				}
				else a[i][j]='X';
			}
		}
	}
	for(int i=r-1; i>=0; --i) {
		for(int j=0;j <c; ++j)
			printf("%c", a[i][j]);
		printf("\n");
	}
	return 0;
}
