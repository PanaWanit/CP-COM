#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	string a;
	cin >> a;
	int x=0, y=0;
	for(char& c : a) {
		y += (c=='N')-(c=='S');
		x += (c=='E')-(c=='W');
		if(c=='Z') x=0, y=0;
	}
	cout << x << " " << y << "\n";
	return 0;
}

