#include<bits/stdc++.h>
using namespace std;
bool prime(int n) {
	if(n==2) return 1;
	if(n%2==0 || n==1)
		return 0;
	for(int i=3; i<=sqrt(n); i+=2)
		if(n%i==0) return 0;
	return 1;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	cout << (prime(n)?"Yes":"No") << "\n";
	return 0;
}
