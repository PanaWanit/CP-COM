#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,x,e,o,fe=0,fo=0;
	cin >> n;
	e=o=n;
	for(int i=1; i; ++i) {
		cin >> x;
		if(x%2==0) {
			++fe, fo=0;
			o-=(fe>=3?3:1);
		}
		else {
			++fo, fe=0;
			e-=(fo>=3?3:1);
		}
		if(e<=0) {
			cout << "1\n" << x << "\n";
			return 0;
		}
		else if(o<=0) {
			cout << "0\n" << x << "\n";
			return 0;
		}
	}
	return 0;
}

