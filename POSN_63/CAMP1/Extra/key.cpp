#include<bits/stdc++.h>
using namespace std;
char a[200], b[200], c[200];
char find_mid(char a, char b, char c) {
	char s[]={a, b, c};
	for(int i=0; i<3; ++i) {
		for(int j=i+1; j<3; ++j)
			if(s[i]<s[j]) swap(s[i], s[j]);
	}
	return s[1];
}
int main() {
	int sza, szb;
	scanf("%d %d %s %s %s", &sza, &szb, a, b, c);
	for(int i=szb-1; i>=0; --i) {
		for(int j=0; j<sza; ++j) {
			c[i]=find_mid(c[i], a[j], b[j]);
		}
	}
	for(int i=0; i<szb; i++)
		printf("%c", c[i]);
	printf("\n");
	return 0;
}
