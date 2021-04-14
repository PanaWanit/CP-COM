#include<bits/stdc++.h>
using namespace std;
const int mxN = 6000;
int ans[mxN];
char A,B;
void _add(char* a, char* b) {
	int pa=strlen(a)-1, pb=strlen(b)-1,left=0,p=0;
	for(int i=max(pa, pb); i>=0; --i, --pa, --pb) {
		if(pa<0) A='0';
		else A=a[pa];
		if(pb<0) B='0';
		else B=b[pb];
		ans[p++]=((A-'0')+(B-'0')+left)%10;
		left = ((A-'0')+(B-'0')+left)/10;
	}
	if(left) cout << left;
	for(int i=p-1; i>=0; i--)
		cout << ans[i];
}
int isNegative(char* a, char* b) {
	int szA=strlen(a), szB=strlen(b);
	if(szA>szB) return 0;
	if(szB>szA) return 1;
	if(strcmp(a, b)<0) return 1;
	if(strcmp(a, b)>0) return 0;
	return 2; // same number
}
void substract(char* a, char* b) { // a>b always
	int pa = strlen(a)-1, pb=strlen(b)-1,p=0;
	for(int i=max(pa, pb); i>=0; --i, --pa, --pb) {
		if(pa<0) A='0';
		else A=a[pa];
		if(pb<0) B='0';
		else B=b[pb];
		int res=A-B;
		if(res>=0)
			ans[p++]=res;
		else {
			ans[p++]=res+10;
			for(int j=pa-1; j>=0; j--) {
				if(a[j]=='0') a[j]='9';
				else {
					--a[j];
					break;
				}
			}
		}
	}
	int i;
	for(i=p-1; i>=0; --i)
		if(ans[i]) break;
	for(; i>=0; --i)
		cout << ans[i];
}
void _minus(char* a, char* b) {
	int pa=strlen(a)-1, pb=strlen(b)-1;
	int status = isNegative(a, b);
	if(status==2)
		cout << "0";
	else if(status==1)
		cout << "-", substract(b, a);
	else substract(a, b);
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	char a[mxN], b[mxN];
	cin >> a >> b;
	if(a[0]=='-'&&b[0]=='-') 
		cout << "-", _add(a+1, b+1);
	else if(a[0]!='-' && b[0]!='-') 
		_add(a, b);
	else if(a[0]=='-') 
		_minus(b, a+1);
	else if(b[0]=='-')
		_minus(a, b+1);
	cout << "\n";
	return 0;
}
