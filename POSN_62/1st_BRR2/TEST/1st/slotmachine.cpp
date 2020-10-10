/*
 	TASK : Slot Machine
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 100;
int a[mxN][5];
int ans[mxN][5];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		for(int j=0; j<5; j++){
			cin >> a[i][j];
		}
	}
	int cnt=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			for(int k=0; k<n; k++){
				for(int l=0; l<n; l++){
					for(int o=0; o<n; o++){
						int ch = a[i][0];
						if(ch == a[j][1] && ch == a[k][2] && ch == a[l][3] && ch == a[o][4]){
							ans[cnt][0] = i , ans[cnt][1] = j , ans[cnt][2] = k , ans[cnt][3] = l , ans[cnt][4] = o;
							cnt++;
						}
					}
				}
			}
		}
	}
	cout << cnt << "\n";
	for(int i=0; i<cnt; i++){
		for(int j=0; j<5; j++){
			cout << ans[i][j]+1 << " ";
		}
		cout << "\n";
	}
	return 0;
}
