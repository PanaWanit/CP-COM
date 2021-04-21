#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	string a;
	cin >> a;
	char dir='N';
	for(char& d : a) {
		if(d=='Z') {
			cout << "Z";
			dir='N';
		}
		else {
			while(dir!=d) {
				if(dir=='N') dir='E';
				else if(dir == 'E') dir='S';
				else if(dir == 'S') dir='W';
				else dir='N';
				cout << "R";
			}
			cout << "F";
		}
	}
	return 0;
}

