#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int t;
	for(cin >> t;t--;){
		int x,y;
		cin >> x >> y;
		cout << (abs(x-y)+9)/10 << "\n";
	}
	return 0;
}
