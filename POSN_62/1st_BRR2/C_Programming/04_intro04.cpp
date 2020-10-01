/*
 	TASK : Intro04
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	double d,vr,vt,vf,t;
	cout << fixed << setprecision(2);
	cin >> d >> vr >> vt >> vf;
	t = d/(vt-vr);
	cout << vf*t << "\n";
	return 0;
}
