#include<bits/stdc++.h>
using namespace std;
void solve() {
	string a;
	cin >> a;
	int n=(int)a.size(),sum=0,mul=1,ch=0;
	for(int i=n-1; i>=n%3; i-=3) {
		int t=0;
		for(int j=i-2; j<=i; ++j)
			t*=10, t+=a[j]-'0';
		sum += t*mul, mul*=-1;
	}
	int t=0;
	for(int j=0; j<n%3; ++j) {
		t*=10, t+=a[j]-'0';
	}
	sum += t*mul;
	if(sum%7==0) {
		cout << "7 * " << sum/7 << "\n",ch=1;
	}
	mul=1, sum=0;
	for(int i=n-1; i>=0; --i)
		sum += mul*(a[i]-'0'), mul*=-1;
	if(sum%11==0)
		cout << "11 * " << sum/11 << "\n",ch=1;
	sum=0;
	for(int i=n-1; i>=n%2; i-=2) {
		int t=0;
		for(int j=i-1; j<=i; ++j)
			t*=10, t+=a[j]-'0';
		sum+=t;
	}if(n%2==1) sum+=a[0]-'0';
	if(sum%99==0)
		cout << "99 * " << sum/99 << "\n", ch=1;
	if(!ch)
		cout << a << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}
