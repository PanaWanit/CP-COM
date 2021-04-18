#include<bits/stdc++.h>
using namespace std;
const int divis[] = {2, 3, 5, 7};
int freq[10];
// 222, 33, 23, 22
int main() {
	int p=0;
	long long n;
	scanf("%d", &n);
	if(n==1) {
		printf("1\n");
		return 0;
	}
	if(n==0) {
		printf("10\n");
		return 0;
	}
	while(n>0&&p<=3) {
		if(n%divis[p]==0)
			n/=divis[p], ++freq[divis[p]];
		else ++p;
	}
	if(n!=1) {
		printf("-1\n");
		return 0;
	}
	freq[8] += freq[2]/3, freq[2]%=3;
	freq[9] += freq[3]/2, freq[3]%=2;
	if(freq[2]>=1&&freq[3]>=1) {
		freq[6]=1;
		--freq[3], --freq[2];
	}
	freq[4] += freq[2]/2, freq[2]%=2;
	for(int i=2; i<=9; ++i) {
		for(int j=0; j<freq[i]; j++)
			printf("%d", i);
	}
	printf("\n");
	return 0;
}
