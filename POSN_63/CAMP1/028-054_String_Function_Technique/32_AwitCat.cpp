#include<stdio.h>
#include<string.h>
using namespace std;
char s[1000];
int main() {
	int n;
	gets(s);
	sscanf(s, "%d", &n);
	while(n--) {
		gets(s);
		int sz=strlen(s);
		if(s[sz-1]=='\r')
			s[sz-1]='\0';
		int ch=0;
		char* token = strtok(s," ");
		while(token != NULL) {
			int len = strlen(token);
			if(len%4!=0) {
				token = strtok(NULL, " ");
				continue; 
			}
			for(int i=0; i<len; i+=4) {
				if(strncmp(token+i, "meow", 4)==0) {
					ch=1;
					break;
				}
			}
			if(ch) break;
			token = strtok(NULL, " ");
		}
		if(ch) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

