/*
 	TASK : Peatty Robot Gen 2
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int N = 1 , E = 0;
	string a;
	cin >> a;
	for(auto& x : a){
		if(x == 'N'){
			if(N == 1) cout << "F";
			else if(N == -1) cout << "RRF";
			else if(E == 1) cout << "RRRF";
			else if(E == -1) cout << "RF";
			N = 1 , E = 0;
		}
		else if(x == 'E'){
			if(E == 1) cout << "F";
			else if(E == -1) cout << "RRF";
			else if(N == -1) cout << "RRRF";
			else if(N == 1) cout << "RF";
			E = 1 , N = 0;
		}
		else if(x == 'S'){
			if(N == -1) cout << "F";
			else if(N == 1) cout << "RRF";
			else if(E == 1) cout << "RF";
			else if(E == -1) cout << "RRRF";
			N = -1 , E = 0;
		}
		else if(x == 'W'){
			if(E == -1) cout << "F";
			else if(E == 1) cout << "RRF";
			else if(N == 1) cout << "RRRF";
			else if(N == -1) cout << "RF";
			N = 0 , E = -1;
		}
		else {
			cout << "Z";
			N = 1 , E = 0;
		}
	}
	return 0;
}
