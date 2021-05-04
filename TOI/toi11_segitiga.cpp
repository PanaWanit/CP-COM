#include<bits/stdc++.h>
using namespace std;
const int mxN = 1<<8;
bool dp[mxN+10][mxN+10][3];
int opr(int a, int b) {
	if(a==0) {
		if(b==0) return 2;
		else if(b==1) return 1;
		return 0;
	}
	else if(a==1) {
		if(b==0) return 2;
		else if(b==1) return 1;
		return 1;
	}
	else {
		if(b==0) return 1;
		else if(b==1) return 2;
		return 1;
	}
}
void query() {
	int n;
	string b;
	cin >> n >> b;
	for(int i=1; i<=n; ++i) {
		dp[i][i][b[i-1]-'0']=1;
	}
	if(b[0]!='0') {
		cout << "no\n";
		memset(dp, 0, sizeof(dp));
		return;
	}
	for(int l=2; l<=n; ++l) {
		for(int i=1; i+l-1<=n; ++i) {
			int j = i+l-1;
			for(int k=i; k<j; ++k) {
				for(int z=0; z<9; ++z) {
					if(dp[i][k][z%3]&&dp[k+1][j][z/3]) dp[i][j][opr(z%3, z/3)] = 1;
				}
			}
		}
	}
	cout << (dp[1][n][0]?"yes\n":"no\n");
	memset(dp, 0, sizeof(dp));
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int q=20;
	while(q--)
		query();
	return 0;
}

