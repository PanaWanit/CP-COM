#include<bits/stdc++.h>
using namespace std;
void solve() {
	int num=0;
	string a;
	cin >> a;
	int sz=(int)a.size();
	for(int i=0; i<sz; i++) {
		if(a[i]=='C') {
			if(a[i+1]=='M') num+=900,++i;
			else if(a[i+1]=='D') num+=400,++i;
			else num+=100;
		}
		else if(a[i] == 'X') {
			if(a[i+1]=='C') num+=90, ++i;
			else if(a[i+1]=='L') num+=40, ++i;
			else num+=10;
		}
		else if(a[i] == 'I') {
			if(a[i+1]=='V') num+=4, ++i;
			else if(a[i+1]=='X') num+=9, ++i;
			else num+=1;
		}
		else if(a[i]=='M') num += 1000;
		else if(a[i]=='D') num +=500;
		else if(a[i]=='L') num += 50;
		else if(a[i]=='V') num += 5;

	}
	cout << num << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}

