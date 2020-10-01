/*
 	TASK : Roman Conversion
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
#define p(x) cout << (x)
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int t;
	for(cin >> t;t--;){
		int n;
		cin >> n;
		while(n){
			if(n >= 1000) n-=1000,p("M");
			else if(n >= 900) n-=900,p("CM");
			else if(n >= 500) n-=500,p("D");
			else if(n >= 400) n-=400,p("CD");
			else if(n >= 100) n-=100,p("C");
			else if(n >= 90) n-=90,p("XC");
			else if(n >= 50) n-=50,p("L");
			else if(n >= 40) n-=40,p("XL");
			else if(n >= 10) n-=10,p("X");
			else if(n>=9) n-=9,p("IX");
			else if(n >= 5) n-=5,p("V");
			else if(n >= 4) n-=4,p("IV");
			else n-=1,p("I");
		}
		cout << "\n";
	}
	return 0;
}
