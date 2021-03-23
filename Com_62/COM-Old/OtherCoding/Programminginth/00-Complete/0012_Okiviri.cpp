/*
    TASK: Okiviri
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
char a[30];
int main(){
	scanf(" %s",a+1);
	int i,len=strlen(a+1);
	printf(".");
	for(i=1;i<=len;i++){
		if(i%3==0) printf(".*..");
		else printf(".#..");
	}printf("\n.");
	for(i=1;i<=len;i++){
		if(i%3==0) printf("*.*.");
		else printf("#.#.");
	}printf("\n#");
	for(i=1;i<=len;i++){
		if(i%3==2 && i==len) printf(".%c.#",a[i]);
		else if(i%3==1) printf(".%c.#",a[i]);
		else printf(".%c.*",a[i]);
	}
	printf("\n.");
	for(i=1;i<=len;i++){
		if(i%3==0) printf("*.*.");
		else printf("#.#.");
	}printf("\n.");
	for(i=1;i<=len;i++){
		if(i%3==0) printf(".*..");
		else printf(".#..");
	}
	
    return 0;
}
