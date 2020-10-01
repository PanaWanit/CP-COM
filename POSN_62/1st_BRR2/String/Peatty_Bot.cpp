/*
 	TASK : Peatty Bot
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int x=0,y=0;
	string a;
	cin >> a;
	for(auto& c: a){
		if(c == 'E') x++;
		if(c == 'W') x--;
		if(c == 'Z') x=y=0;
		if(c == 'S') y--;
		if(c == 'N') y++;
	}
	cout << x << " " << y << "\n";
	return 0;
}
