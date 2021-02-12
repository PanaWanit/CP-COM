#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+1;
int tree[mxN], mark[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	while(n--) {
		int x, idx=1;
		cin >> x;
		while(mark[idx]) {
			if(x > tree[idx]) idx = 2*idx+1, cout << "R";
			else idx = 2*idx, cout << "L";
		}
		cout << "*\n";
		mark[idx]=1, tree[idx] = x;
	}
	return 0;
}
