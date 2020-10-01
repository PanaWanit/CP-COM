/*
 	TASK : Fractal
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 1<< 11 , mxM = 1 << 10;
bool a[mxN][mxM];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n;
	cin >> n;
	for(int k=0; k<n; k++){
		for(int i = (1<<k)-1,z=0; i<(1<<n)-1; i+= 1<<(k+1), z+=(1<<k) ){
			for(int j=0; j < 1<<k; j++){
				a[i][j+z] = 1;
			}
		}
	}

	for(int i=0; i<(1<<n)-1; i++){
		for(int j=0; j<1<<(n-1); j++){
			if(a[i][j]) cout << "*";
			else cout << "-";
		}
		cout << "\n";
	}
	return 0;
}
