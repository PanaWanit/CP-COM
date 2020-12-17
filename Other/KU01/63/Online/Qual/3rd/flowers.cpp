/*
	TASK : KU01-3rd-flowers
	AUTHOR : Pana Wanit
	LANG : C++
*/
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define ar array
#define vt vector
#define FOE(x, a) for(auto& x: a)
int qs[1001];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,l;
	cin >> l >> n;
	for(int i=1; i<=1000; i++) {
		qs[i] = qs[i-1] + i;
	}
	int p=l,cnt=1;
	while(qs[p] < n) {
		p += l;
		cnt++;
	}
	cout << cnt << "\n";
	return 0;
}
