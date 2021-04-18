#include<bits/stdc++.h>
using namespace std;
int n, a[20],cnt=0;
void permu(int st=0,int end=0) {
	if(end>n) return;
	if(end==n) {
		++cnt;
		for(int i=0; i<st; ++i)
			printf("%s\n", (a[i]==1?"--":"||"));
		printf("E\n");
		return ;
	}
	a[st]=1;
	permu(st+1, end+1);
	a[st]=2;
	permu(st+1, end+2);
}
int main() {
	scanf("%d", &n);
	permu();
	return 0;
}
