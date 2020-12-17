/*
 	TASK : 61_The Peatt
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
void solve() {
	string a;
	bool ch=0;
	cin >> a;
	int sz = (int)a.size(), sum=0,mi=1;
	for(int i=sz-1; i>=0; i-=3) {
		int now=0;
		for(int j=0; j<3; j++) {
			if(i - j < 0) break;
			now += pow(10, j)*(a[i-j]-'0');
		}
		sum += mi*(now);
		mi*=-1;
	}
	if(sum % 7 == 0) cout << 7 << " * " << sum/7 << "\n",ch=1;

	sum=0,mi=1;
	for(int i=sz-1; i>=0; i--)
		sum += mi*(a[i]-'0'), mi*=-1;
	if(sum%11==0) cout << 11 << " * " << sum/11 << "\n",ch=1;

	sum=0;
	for(int i=sz-1; i>=0; i-=2) {
		int now=0;
		for(int j=0; j<2; j++) {
			if(i - j < 0) break;
			now += pow(10, j)*(a[i-j]-'0');
		}
		sum+=now;
	}
	if(sum%99==0) cout << 99 << " * " << sum/99 << "\n",ch=1;
	if(!ch) cout << a << "\n";
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}
