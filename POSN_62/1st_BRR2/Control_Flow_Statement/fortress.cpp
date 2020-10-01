/*
 	TASK : fortress
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	for(int i=40;i--;){
		int n,m,ans;
		cin >> n >> m;
		cout << ( (m/2-n > n || m/2-n < 0)?0:m/2-n+1) << "\n";
	}
	return 0;
}
