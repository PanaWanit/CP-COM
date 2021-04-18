#include<bits/stdc++.h>
using namespace std;

const int mxN = 1e5+10;

/*struct A {
	char s[10];
	bool operator < (const A& o) const {
		char a[20], char b[20];
	   	strcpy(a, s), strcpy(b, o.s);
		strcat(a, o.s), strcat(b, s);
		if(strcmp(a, b)<0) return true;
		return false;
	}
};
A a[mxN];*/
string a[mxN];

int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=0; i<n; ++i) {
		cin >> a[i];
	}
	sort(a, a+n, [](const string& a, const string &b){
			return a+b<b+a;
			});
	for(int i=0; i<n; ++i) {
		cout << a[i];
	}
	cout << "\n";
	return 0;
}
/* 
3
105 109 1
*/
