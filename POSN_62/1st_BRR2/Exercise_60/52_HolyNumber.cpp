/*
 	TASK : Holy Number
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	string a;
	int n;
	cin >> a >> n;
	int sz = (int)a.size();
	char x =  a[sz-n];
	for(int i=sz-n; i<sz; i++) a[i] = '0';
	if(x <= '4') cout << a << "\n";
	else {
		a[sz-n-1] += 1;
		int tod=0;
		for(int i=sz-n-1; i>=0; i--) {
			int num = a[i]+tod-'0';
			a[i] = (num%10)+'0';
			tod = num/10;
		} if(tod) cout << 1;
		cout << a << "\n";
	}
	return 0;
}
