#include<bits/stdc++.h>
using namespace std;
const int mxN = 1000;
int base;
char a[mxN], b[mxN], ans[mxN];
int convert(char* s) {
	int num=0, len=strlen(s);
	for(int i=0; i<len; i++) {
		num*=base;
		if(isdigit(s[i])) num+=s[i]-'0';
		else num+=10+s[i]-'A';
	}
	return num;
}
int main() {
	int sum,cnt=0;
	scanf("%d %s %s",&base, a, b);
	sum = convert(a) + convert(b);
	printf("%d\n", sum);
	while(sum) {
		if(sum%base>=10) ans[cnt++] = (sum%base)-10+'A';
		else ans[cnt++]=(sum%base)+'0';
		sum/=base;
	}
	for(int i=cnt-1; i>=0; i--)
		printf("%c", ans[i]);
	printf("\n");
	return 0;
}

