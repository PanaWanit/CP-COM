#include<bits/stdc++.h>
using namespace std;
const int mxN = 502;
int tree[mxN], n, ans=0;
int tree_curt(int u) {
	if(tree[u]==0) {
		tree[u] = min(tree_curt(u*2), tree_curt(u*2+1));
		tree[u*2] -= tree[u] , tree[u*2+1] -= tree[u];
		ans += tree[u*2] + tree[u*2+1];
	}
	return tree[u];
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	cin >> n;
	for(int i=n/2+1; i<=n; i++) {
		cin >> tree[i];
	}
	tree_curt(1);
	cout << tree[1] + ans << "\n";
	return 0;
}
