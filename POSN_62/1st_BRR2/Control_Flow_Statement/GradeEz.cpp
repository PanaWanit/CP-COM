/*
 	TASK : Grade Ez
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
	if(n >= 80) cout << "A";
	else if(n >= 75) cout << "B+";
	else if(n >= 70) cout << "B";
	else if(n >= 65) cout << "C+";
	else if(n >= 60) cout << "C";
	else if(n >= 55) cout << "D+";
	else if(n >= 50) cout << "D";
	else cout << "F";
	return 0;
}
