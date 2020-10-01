/*
 	TASK : Pythagorus
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	double a,b,c;
	cin >> a >> b >> c;
	cout << fixed << setprecision(2);
	if(a == 0){
		cout << sqrt(c*c - b*b) << "\n";
	}
	else if(b==0){
		cout << sqrt(c*c - a*a) << "\n";
	}
	else {
		cout << sqrt(a*a + b*b) << "\n";
	}
	return 0;
}
