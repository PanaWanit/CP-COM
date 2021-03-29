#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int a,b,c;
	cin >> a >> b >> c;
	a=a+b+c;
	if(a>=80) cout << "A";
	else if(a>=75) cout << "B+";
	else if(a>=70) cout << "B";
	else if(a>=65) cout << "C+";
	else if(a>=60) cout << "C";
	else if(a>=55) cout << "D+";
	else if(a>=50) cout << "D";
	else cout << "F";
	cout << "\n";
	return 0;
}

