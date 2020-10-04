/*
 	TASK : PlayBase
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<int,pii> pip;
#define fp first
#define sp second
#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(),(x).end()
int base;
int change(string& a){
	int sum=0;
	for(auto& c : a){
		sum*=base;
		if(isdigit(c)) sum += c - '0';
		else sum += c-'A'+10;
	}
	return sum;
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	string a,b;
	cin >> base >> a >> b;
	int A = change(a) , B = change(b) , C = A+B;
	cout << C << "\n";
	a="";
	while(C){
		if(C % base <=9) a+= (char)(C%base+'0');
		else a += char(C%base+'A'-10);
		C/=base;
	}
	reverse(a.begin(),a.end());
	cout << a << "\n";
	return 0;
}
