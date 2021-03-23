/*
 	TASK : LCM
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	if(a%b==0) return b;	
	return gcd(b,a%b);
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int q ;
	ll a;
	cin >> q >> a;
	while(--q){
		ll b;
		cin >> b;
		a = (a*b)/(gcd(a,b));
	}
	cout << a << "\n";
	return 0;
}
