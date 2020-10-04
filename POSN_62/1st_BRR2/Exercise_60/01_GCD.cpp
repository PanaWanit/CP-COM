/*
 	TASK : GCD
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
int gcd(int a,int b){
	if(a%b==0) return b;	
	return gcd(b,a%b);
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int q , a;
	cin >> q >> a;
	while(--q){
		int b;
		cin >> b;
		a = gcd(a,b);
	}
	cout << a << "\n";
	return 0;
}
