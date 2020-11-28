#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,a,b;
	scanf("%d",&n);
	for(int i = n; i--;) {
		scanf("%d %d",&a, &b);
		if(a > 400 || b < 150 || b > 200) n--;
	}
	printf("%d", n);
	return 0;
}
