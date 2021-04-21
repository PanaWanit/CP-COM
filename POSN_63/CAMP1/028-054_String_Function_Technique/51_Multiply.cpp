#include<bits/stdc++.h>
using namespace std;
const int mxN = 10000;
int c[mxN+10];
void mul(char* a, char* b) {
	int la=strlen(a), lb=strlen(b);
	for(int i=la-1,p=0; i>=0; --i, ++p) {
		int tod=0,idx=0;
		for(int j=lb-1; j>=0; --j, ++idx) {
			c[mxN-p-idx] += (a[i]-'0')*(b[j]-'0')+tod;
			tod=c[mxN-p-idx]/10;
			c[mxN-p-idx]%=10;
		}
		while(tod) 
			c[mxN-p-idx]+=tod, tod=c[mxN-p-idx]/10, c[mxN-p-idx]%=10, ++idx;
	}
	int i;
	for(i=0; !c[i]; ++i);
	for(;i<=mxN; ++i)
		cout << c[i];
	cout << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	char a[mxN], b[mxN];
	cin >> a >> b;
	if(b[0]=='0' || a[0]=='0')
		cout << "0\n";
	else if(a[0]=='-' && b[0]=='-')
		mul(a+1, b+1);
	else if(a[0]=='-' )
		cout << "-", mul(a+1, b);
	else if(b[0]=='-')
		cout << "-", mul(a, b+1);
	else mul(a, b);
	return 0;
}
