/*
 	TASK : Mod of Power
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : N/a
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
ll mod;
ll mod_of_power(ll base, ll power){
	if(power==0) return 1%mod;
	int t = mod_of_power(base,power/2)%mod;
	if(power%2==0) return (t*t)%mod;
	return ((t*t)%mod*base)%mod;
}
int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	ll base,power;
	cin >> base >> power >> mod;
	cout << mod_of_power(base,power) << "\n";
	return 0;
}
