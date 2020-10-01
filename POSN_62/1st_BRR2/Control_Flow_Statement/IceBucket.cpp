/*
 	TASK : Ice Bucket
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int t;
	for(cin >> t; t--;){
		int g,k,n=1,cnt=0;
		cin >> g >> k;
		while(n*100 < g){
			g-=10;
			n += k-1;
			cnt++;
		}
		cout << cnt << "\n";
	}
	return 0;
}
