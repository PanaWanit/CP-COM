/*
 	TASK : Intro02
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	char a,b;
	cin >> a >> b;
	cout << char(a + 'a' - 'A') << " " << char(b - 'a' + 'A') << "\n";
	return 0;
}
