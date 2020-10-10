/*
 	TASK : Area
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const double PI = acos(-1);
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	double n,m;
	cin >> n >> m;
	cout << fixed << setprecision(3);
	cout << n*m/2 << "\n";
	cout << 2*PI*n << "\n";
	cout << PI*n*n << "\n";
	return 0;
}
