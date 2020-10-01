/*
 	TASK : Intro03
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	cout << fixed << setprecision(2) ;
	double a,b;
	cin >> a >> b;
	cout << "Plus: " << a+b << "\n";
	cout << "Minus: " << a-b << "\n";
	cout << "Multiply: " << a*b << "\n";
	cout << "Divide: " << a/b << "\n";
	cout << "Modulo: " << fmod(a,b) << "\n";
	cout << "Power: " << pow(a,b) << "\n";
	cout << "Root: " << pow(a,1/b) << "\n";
	return 0;
}
