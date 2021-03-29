#include<bits/stdc++.h>
using namespace std;

int a[3]={1};
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	string s;
	cin >> s;
	for(int i=0; s[i]; i++) {
		switch(s[i]) {
			case 'A':
				swap(a[0], a[1]);
				break;
			case 'B':
				swap(a[1], a[2]);
				break;
			default:
				swap(a[1], a[2]);

		}
	}
	for(int i=0; i<3; i++)
		if(a[i]) cout << i+1 << "\n";
	return 0;
}

