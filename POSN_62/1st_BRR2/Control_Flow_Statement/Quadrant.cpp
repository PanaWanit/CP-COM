/*
 	TASK : Quadrant
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n;
	cin >> n;
	n = ( (n%360)+360)%360;
	if(n == 90 || n == 270) cout << "y-axis";
	else if(n == 0 || n  == 180) cout << "x-axis";
	else if(n < 90) cout << 1;
	else if(n < 180) cout << 2;
	else if(n < 270) cout << 3;
	else cout << 4;
	return 0;
}
