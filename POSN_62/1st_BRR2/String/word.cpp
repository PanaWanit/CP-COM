/*
 	TASK : word
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int di[] = {0,0,1,-1,1,1,-1,-1} , dj[] = {1,-1,0,0,1,-1,1,-1} , mxN = 25;
char a[mxN][mxN];
int len,k,r,c;
string b;
bool fndword(int i,int j,int now){
	if(now == len) return 1;
	if(a[i][j] != b[now]) return 0;
	int ii = i+di[k] , jj = j+dj[k];
	if( (ii < 0 || jj < 0 || ii >= r || jj >= c) && now!=len-1) return 0;
	return fndword(ii,jj,now+1);
}
void fnd(){
	cin >> b;
	len = (int)b.size();
	for(int i=0; i<len; i++) b[i] = tolower(b[i]);
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			for(k=0; k<8; k++){
				if(fndword(i,j,0)) {
					cout << i << " " << j << "\n";
					return;
				}
			}
		}
	}
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	cin >> r >> c;
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cin >> a[i][j];
			a[i][j] = tolower(a[i][j]);
		}
	}
	int q;
	for(cin >> q; q--;) fnd();
	return 0;
}
