#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e9+1;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		bool ch=0;
		for(int i=2; i<=sqrt(n); i++) {
			while(n%i==0) {
				ch=1;
				cout << i;
				if(n/i!=1)
					cout << " x ";
				n/=i;
			}
		}
		if(n!=1) cout << n;
		cout << "\n";
	}
	return 0;
}
