/*
	TASK : KU01-2nd-castel
	AUTHOR : Pana Wanit
	LANG : C++
*/
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define ar array
#define vt vector
#define FOE(x, a) for(auto& x: a)

int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	int b = sqrt(n-1);
	cout << 2*b-(1-(n-b%2)%2) << "\n";
	return 0;
}
