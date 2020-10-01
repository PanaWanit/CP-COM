/*
 	TASK : Switch Practice
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n;
	cin >> n;
	switch(n){
		case 1: cout << "Sunday";break;
		case 2: cout << "Monday";break;
		case 3: cout << "Tuesday"; break;
		case 4: cout << "Wednesday";break;
		case 5: cout << "Thursday";break;
		case 6: cout << "Friday";break;
		case 7: cout << "Saturday";break;
		default: cout << "Not a day";
	}
	return 0;
}
