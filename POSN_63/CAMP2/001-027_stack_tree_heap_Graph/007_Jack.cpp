#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+100;
int node[mxN], l[mxN], r[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cout << "*\n";
	cin >> n >> node[1];
	for(int i=2; i<=n; ++i) {
		int now=1;
		cin >> node[i];
		while(1) {
			if(node[i]<node[now]) {
				cout << "L";
				if(!l[now]) {
					l[now]=i; break;
				}
				now=l[now];
			}
			else if(node[i]>node[now]) {
				cout << "R";
				if(!r[now]) {
					r[now]=i; break;
				}
				now=r[now];
			}
		}
		cout << "*\n";
	}
	return 0;
}

