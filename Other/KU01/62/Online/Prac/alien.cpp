#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false),cin.tie(nullptr);
	int n,a,b,r,cnt=0;
	cin >> n >> a >> b >> r;
	while(n--) {
		int x,y;
		cin >> x >> y;
		int dis = (x-a)*(x-a) + (b-y)*(b-y);
		if(dis <= r*r) cnt++;
	}
	cout << cnt << "\n";
	return 0;
}
