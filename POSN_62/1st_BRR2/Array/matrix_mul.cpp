/*
 	TASK : Matrix Multiplication
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 10;
int a[mxN][mxN],b[mxN][mxN],ans[mxN][mxN];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,m,r,c;
	cin >> n >> m >> r >> c;
	for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin >> a[i][j];
	for(int i=0; i<r; i++) for(int j=0; j<c; j++) cin >> b[i][j];
	if(m != r) {
		cout << "Can't Multiply.";
		return 0;
	}
	for(int i=0; i<n ;i++){
		for(int j=0; j<c; j++){
			for(int k=0; k<m; k++){
				ans[i][j] += a[i][k]*b[k][j];
			}
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<c; j++)
			cout << ans[i][j] << " ";
		cout << "\n";
	}
	return 0;
}
