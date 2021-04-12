/*
	TASK: SMS Thumb
	LANG: C
	AUTHOR: ~pnw
	SCHOOL: RYW
*/
#include<stdio.h>
const char s[11][11] = {"CAB", "FDE", "IGH", "LJK", "OMN", "SPQR", "VTU", "ZWXY"};
const int mod[] = {3, 3, 3, 3, 3, 4, 3, 4};
int sz=0;
char a[200];
void push(int b, int t) {
	if(b<=0) {
		for(int i=0; i<t; ++i) {
			if(sz==0) break;
			a[sz--]='\0';
		}
	}
	else a[sz++] = s[b][t%mod[b]];
}
int main() {
	int n,ni,nj,b,t;
	scanf("%d %d %d", &n, &b, &t);
	--b;
	push(b-1, t);
	ni = b/3, nj = b%3;
	while(--n) {
		int h,v;
		scanf("%d %d %d", &h, &v, &t);
		ni = (ni+3+v)%3, nj = (nj+3+h)%3;
		push(ni*3+nj-1, t);
	}
	printf("%s\n", sz==0?"null":a);
	return 0;
}

