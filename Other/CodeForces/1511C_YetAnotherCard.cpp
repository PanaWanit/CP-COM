#include<bits/stdc++.h>
using namespace std;
int idx[55];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,q;
	cin >> n >> q;
	for(int i=1, x; i<=n; ++i) {
		cin >> x;
		if(!idx[x]) idx[x]=i;
	}
	while(q--) {
		int x;
		cin >> x;
		cout << idx[x] << " ";
		for(int i=1; i<=50; ++i) {
			if(idx[i]<idx[x]) idx[i]++;
		}
		idx[x]=1;
	}
	cout << "\n";
	return 0;
}

