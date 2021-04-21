/*
	TASK: Slot Machine
	LANG: C
	AUTHOR: ~pnw
	SCHOOL: RYW
*/
#include<stdio.h>
const int mxN = 20;
int a[mxN][7];
int main() {
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; ++i) {
		for(int j=0; j<5; ++j)
			scanf("%d", &a[i][j]);
	}
	int cnt=0;
	for(int i=0; i<n; ++i) {
		for(int j=0; j<n; ++j) {
			for(int k=0; k<n; ++k) {
				for(int l=0; l<n; ++l) {
					for(int o=0; o<n; ++o) {
						int c = a[i][0];
						if(c==a[j][1]&&c==a[k][2]&&c==a[l][3]&&c==a[o][4])
							++cnt;
					}
				}
			}
		}
	}
	printf("%d\n", cnt);
	for(int i=0; i<n; ++i) {
		for(int j=0; j<n; ++j) {
			for(int k=0; k<n; ++k) {
				for(int l=0; l<n; ++l) {
					for(int o=0; o<n; ++o) {
						int c = a[i][0];
						if(c==a[j][1]&&c==a[k][2]&&c==a[l][3]&&c==a[o][4])
							printf("%d %d %d %d %d\n", i+1, j+1, k+1, l+1, o+1);
					}
				}
			}
		}
	}
	return 0;
}

