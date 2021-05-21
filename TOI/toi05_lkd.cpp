#include<bits/stdc++.h>
using namespace std;
#define sz(x) (int)(x).size()
string ans;
int st=1;
int decode(string& code) {
	if(code=="00") {
		if(st==1) return 0;
		st=2;
		return 1;
	}
	if(code=="11") {
		if(st==1) {
			st=2;
			return 1;
		}
		st=1;
		return 0;
	}
	if(code=="01") {
		if(st==2) { 
			st=4; 
			return 1;
		}
		st=3;
		return 0;
	}
	if(code=="10") {
		if(st==4) return 1;
		st=3;
		return 0;
	}
}
void query() {
	string s,code;
	int sum=0;
	cin >> s;
	if(sz(s)!=16) return;
	for(int i=0; i<16; i+=2) {
		code="", code+=s[i], code+=s[i+1];
		sum*=2, sum+=decode(code);
	}
	ans += (char)(sum);
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int Q;
	cin >> Q;
	while(Q--) {
		query();
	}
	cout << ans << "\n";
	return 0;
}
