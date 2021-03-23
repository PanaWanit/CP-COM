#include<bits/stdc++.h>
using namespace std;
char a[5][5];
int cnt=0,dir=0;
const int di[] = {1,-1,0,0} , dj[] = {0,0,1,-1};
int n,m;
void score(int x,int y){
	cnt+=5;
	char ch = a[x][y];
	a[x][y] = '-';
	for(int i=0;i<4;i++){
		int ii = x + di[i] , jj = y + dj[i];
		if(ii >= n || ii < 0 || jj >= m || jj < 0) continue;
		if(a[ii][jj] != ch) continue;
		score(ii,jj);
	}
}
void drop(){
	for(int i=n-2;i>=0;i--){
		for(int j=0;j<m;j++){
			if(a[i+1][j] == '-' && isalpha(a[i][j])){
					swap(a[i+1][j] , a[i][j]);
			}
		}
	}
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	cin >> n >> m;
	for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin >> a[i][j] ;
	int q;
	for(cin >> q;q--;) {
		int x,y;char opr;
		cin >> x >> y >> opr;
		dir =(opr=='R'?1:-1);
		if( !isalpha(a[x][y]) || y+dir >= m || y+dir < 0 || a[x][y+dir]!='-'){
				cnt-=5;continue;
		}
		swap(a[x][y] , a[x][y+dir]);
		drop();
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(isalpha(a[i][j]) &&( (i+1 < n && a[i+1][j]==a[i][j]) || (i-1 >= 0 && a[i-1][j]==a[i][j]) || (j+1 < m && a[i][j+1] == a[i][j]) || (j-1 >=0 && a[i][j-1]==a[i][j]) )){
					score(i,j);
				}
				drop();
			}
		}
	}
	cout << cnt << "\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}

