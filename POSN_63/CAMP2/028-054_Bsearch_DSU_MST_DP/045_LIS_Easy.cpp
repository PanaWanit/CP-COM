#include<bits/stdc++.h>
using namespace std;
const int mxN = 1010;
vector<int> l[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,x,idx;
	cin >> n;
	vector<int> dp,ans;
	while(n--) {
		cin >> x;
		auto it = lower_bound(dp.begin(), dp.end(), x);
		idx=it-dp.begin();
		if(it==dp.end()) dp.push_back(x);
		else *it=x;
		l[idx].push_back(x);
	}
	n = dp.size(), ans.push_back(l[n-1][0]);
	cout << n << "\n";
	for(int i=n-2; i>=0; --i) {
		for(auto& x : l[i]) {
			if(x<ans.back()) {
				ans.push_back(x);
				break;
			}
		}
	}
	for(int i=n-1; i>=0; --i)
		cout << ans[i] << " ";
	cout << "\n";
	return 0;
}

