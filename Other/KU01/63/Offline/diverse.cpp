#include<bits/stdc++.h>
using namespace std;
const int mxN = 60;
int a[mxN][mxN], cnt=0;
void play(int x, int y) {
	set<int> s;
	for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++)
			s.insert(a[x+i][y+j]);
	}
	if((int)s.size()>=5) cnt++;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int r,c;
	cin >> r >> c;
	for(int i=0; i<r; i++)
		for(int j=0; j<c; j++)
			cin >> a[i][j];
	for(int i=0; i<=r-5; i++) {
		for(int j=0; j<=c-5; j++) {
			play(i, j);
		}
	}
	cout << cnt << "\n";
	return 0;
}
