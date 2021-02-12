#include<bits/stdc++.h>
using namespace std;
const int mxN = 1<<21;
int tree[mxN];
void calc(int& a, int& b) {
	char x;
	if(tree[a]>tree[b]) x='>';
	else if(tree[a]<tree[b]) x='<';
	else x = '=';
	cout << a << x << b << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> tree[i];
	}
	for(int i=n/2; i>=0; i--) {
		tree[i] += tree[i*2+1] + tree[i*2+2];
	}
	cout << tree[0] << "\n";
	int t;
	cin >> t;
	while(t--) {
		int a,b;
		cin >> a >> b;
		calc(a, b);
	}
	return 0;
}
