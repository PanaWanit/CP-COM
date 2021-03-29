#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int sum=0;
	for(int i=0,x; i<3; i++) {
		cin >> x;
		sum += log2(x);
	}
	cout << sum << "\n";
	return 0;

}

