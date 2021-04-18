#include<bits/stdc++.h>
using namespace std;
int main() {
	int a,k;
	scanf("%d %d", &a, &k);
	int p = round(a/(pow(10, k)));
	printf("%.0lf\n", p*pow(10, k));
	return 0;
}
