#include<bits/stdc++.h>
using namespace std;
int mul[] ={8, 6, 4, 2 , 1};
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t, ans=0, cur=0;
	cin >> t;
	while(t--) {
		int need=0;
		for(int i=0,x; i<5; ++i) {
			cin >> x;
			need += x*mul[i];
		}
		int now = (need-cur+7)/8;
		ans += now;
		cur += now*8-need;
	}
	cout << ans << "\n";
	return 0;
}
