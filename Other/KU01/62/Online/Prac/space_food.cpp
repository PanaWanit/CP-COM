#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false),cin.tie(nullptr);
	int n,m,k,lf=0,cnt=0,x;
	cin >> n >> m >> k;
	while(n--) {
		cin >> x;
		lf += x;
		if(lf < m) {
			cout << -1 << "\n";
			return 0;
		}
		lf -= m;
		if(k > m) lf -= k-m;
		if(lf < 0) lf = 0 , cnt++;
	}
	cout << cnt << "\n"
	return 0;
}
