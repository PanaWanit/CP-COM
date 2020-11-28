#include<bit/stdc++.h>
using namespace std;
char a[100][100];
int main() {
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++) 
		scanf(" %s", a[i]);
	for(int i=0; i<n; i++) {
		for(int j=1; j<n; j++) {
			if(a[i][j] == '#') {
				for(int k=j; k>=1; k--) {
					if(a[i][k-1] == '.') swap(a[i][k],a[i][k-1]);
					else break;
				}
			}
		}
	}
	for(int j=0; j<n; j++) {
		for(int i=n-2; i>=0; i--) {
			if(a[i][j] == '#') {
				for(int k=i; k<n-1; k++) {
					if(a[k+1][j] == '.') swap(a[k+1][j] ,a[k][j]);
				}
			}
		}
	}
	for(int i=0; i<n; i++) pn(a[i]);
	return 0;
}
