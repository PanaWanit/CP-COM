#include<bits/stdc++.h>
using namespace std;
void query() {
	int n,o=0,e=0;
	scanf("%d", &n);
	for(int i=0,w; i<n; i++) {
		scanf("%d", &w);
		o+=(w&&i%2==0), e+=(w&&i%2==1);
	}
	printf("%s\n", (n%2==1||abs(o-e)<=1)?"YES":"NO");
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--)
		query();
	return 0;
}

