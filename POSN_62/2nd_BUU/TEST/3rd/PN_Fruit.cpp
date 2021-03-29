#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n,sum=0,x;
	vector<int> lis;
	cin >> n;
	while(n--) {
		cin >> x;
		sum += x;
		if(sum <= 0) continue;
		auto it = upper_bound(lis.begin(), lis.end(), sum);
		if(it == lis.end()) lis.push_back(sum);
		else *it = sum;
	}
	cout << (int)lis.size() << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}
