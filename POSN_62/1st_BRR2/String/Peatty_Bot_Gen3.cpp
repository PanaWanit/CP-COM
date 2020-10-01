/*
 	TASK : Peatty Robot Gen 3
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	string a;
	int x=0,y=0,l,n,e,s,w;
	n = e = s = w = 0;
	cin >> a >> l;
	if((int)a.size() == l) {
		cout << 0 << "\n";
		return 0;
	}
	for(auto& c : a){
		if(c == 'N') y++,n++;
		else if(c == 'S') y--,s++;
		else if(c == 'E') x++,e++;
		else if(c == 'W') x--,w++;
	}
	
	while(l--){
		if(n > s && s) s--,y++;
		else if(s > n && n) n--,y--;
		else if(e > w && w) w--,x++;
		else if(w > e && e) e--,x--;
		else if(n == 0 && s) s--,y++;
		else if(s == 0 && n) n--,y--;
		else if(e == 0 && w) w--,x++;
		else if(w == 0 && e) e--,x--;
	}
	cout << abs(2*(abs(x)+abs(y))) << "\n";
	return 0;
}
