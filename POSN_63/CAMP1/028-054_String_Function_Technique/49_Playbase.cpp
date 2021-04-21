#include<bits/stdc++.h>
using namespace std;
char a[30], b[30], ans[30];
int base;
int convert(char* s) {
	int n = strlen(s),sum=0;
	for(int i=0; i<n; ++i) {
		sum*=base;
		if(isdigit(s[i])) sum+=s[i]-'0';
		else sum+=s[i]-'A'+10;
	}
	return sum;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	cin >> base >> a >> b;
	int sum=convert(a)+convert(b), p=0;
	cout << sum << "\n";
	while(sum) {
		if(sum%base<10) ans[p++]=sum%base+'0';
		else ans[p++]=sum%base+'A'-10;
		sum/=base;
	}
	for(int i=p-1; i>=0; --i)
		cout << ans[i];
	cout << "\n";
	return 0;
}
