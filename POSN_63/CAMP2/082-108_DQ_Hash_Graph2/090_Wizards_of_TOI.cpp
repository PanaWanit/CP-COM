#include<bits/stdc++.h>
using namespace std;
#define T pair<int,int>
const int Hsz=5e6+11;
int Hash[Hsz],keep[2][Hsz];
int x[4][1510],y[4][1510];
int Hash_opr(const int& a, const int& b) {
	return ((a+(3*b)%Hsz)%Hsz+Hsz)%Hsz;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,xt,yt;
	cin >> xt >> yt >> n;
	for(int i=0; i<4; ++i)
		for(int j=0; j<n; ++j)
			cin >> x[i][j] >> y[i][j];
	for(int i=0; i<n; ++i) {
		for(int j=0; j<n; ++j) {
			int xx = x[0][i]+x[1][j], yy = y[0][i]+y[1][j];
			int key = Hash_opr(xx, yy);
			while(Hash[key]!=0)
				++key, key%=Hsz;
			Hash[key]=1500*i+j+1;
			keep[0][key]=xx, keep[1][key]=yy;
		}
	}
	for(int i=0; i<n; ++i) {
		for(int j=0; j<n; ++j) {
			int xx=xt-x[2][i]-x[3][j], yy=yt-y[2][i]-y[3][j];
			int key = Hash_opr(xx, yy);
			while(Hash[key]!=0) {
				if(keep[0][key]==xx&&keep[1][key]==yy) {
					int p=Hash[key]-1;
					cout << x[0][p/1500] << " " << y[0][p/1500] << "\n";
					cout << x[1][p%1500] << " " << y[1][p%1500] << "\n";
					cout << x[2][i] << " " << y[2][i] << "\n";
					cout << x[3][j] << " " << y[3][j] << "\n";
					return 0;
				}
				++key, key%=Hsz;
			}
		}
	}
	return 0;
}
