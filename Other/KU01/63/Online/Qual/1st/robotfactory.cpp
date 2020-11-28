#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int h1, h2, b1, b2, x, y, mx=0;
	cin >> h1 >> h2 >> b1 >> b2 >> x >> y;
	for(int i=0; i<=h1; i++) {
		for(int j=0; j<=i; j++) {
			int w_w = min(j, b1) , w_b = min(i-j, b2); // w_w white head white body , w_b white head black body
			for(int k=0; k<=h2; k++) {
				for(int l=0; l<=k; l++) {
					int b_b = min(l, b2-w_b) , b_w = min(k-l, b1-w_w);//b_b black head black body,b_w black head white body
					mx = max(mx, min(x,b_b+w_w) + min(y,b_w+w_b));
				}
			}
		}
	}
	cout << mx << "\n";
	return 0;
}
