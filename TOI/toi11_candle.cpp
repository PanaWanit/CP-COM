#include<bits/stdc++.h>
using namespace std;

const int di[] = {0,0,1,-1,1,1,-1,-1} , dj[] = {1,-1,0,0,1,-1,1,-1};
string a[2000];
int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m;
	cin >> n >> m;
	queue<pair<int,int>> qu;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j] == '1'){
				cnt++;
				qu.emplace(i,j);
				while(!qu.empty()){
					int ni = qu.front().first , nj = qu.front().second;
					qu.pop();
					for(int k=0;k<8;k++){
						int ii = ni+di[k] , jj = nj+dj[k];
						if(ii >= n || jj >= m || ii < 0 || jj < 0) continue;
						if(a[ii][jj] == '0') continue;
						a[ii][jj] = '0';
						qu.emplace(ii,jj);
					}
				}
			}
		}
	}
	cout << cnt << "\n";
 	return 0;  
}
