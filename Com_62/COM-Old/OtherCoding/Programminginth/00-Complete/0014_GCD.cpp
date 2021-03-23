/*
    TASK: GCD
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int gcd(int a,int b){
	if(a%b==0){
		return b;
	}
	return gcd(b,a%b);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
	int a,b;
	cin >> a >> b;
	cout << gcd(a,b);
    return 0;
}
