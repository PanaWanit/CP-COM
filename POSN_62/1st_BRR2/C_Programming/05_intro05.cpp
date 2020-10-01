/*
 	TASK : Intro05
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const double PI = acos(-1);
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	cout << fixed << setprecision(2);
	double x[3] , y[3] , k , l[3];
	for(int i=0; i<3; i++){
		cin >> x[i] >> y[i];
	}
	cin >> k;
	for(int i=0; i<3; i++){
		for(int j=i+1; j<3; j++){
			l[i+j-1] = sqrt(pow(x[i]-x[j],2) + pow(y[i]-y[j],2)); 
		}
	}
	double s = (l[0] + l[1] + l[2])/2; cout << sqrt(s * (s-l[0]) * (s-l[1]) * (s-l[2])) << "\n";
	cout << (s*k*2) + (PI*k*k) << "\n";
	return 0;
}
