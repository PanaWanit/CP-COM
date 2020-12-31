/*
 	TASK : FC_Power
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = sqrt(1e8);
vector<int> prime{2};
bool mark[mxN];
void sieve() {
	for(int i=3; i<=sqrt(mxN); i+=2) {
		if(mark[i]) continue;
		for(int j=i*i; j<=mxN; j+=i)
			mark[j]=1;
	}
	for(int i=3; i<=mxN; i+=2)
		if(!mark[i]) prime.push_back(i);
}
void solve() {
	int n,cnt=0;
	vector<int> f;
	cin >> n;
	for(auto& x : prime) {
		if(n%x==0) f.push_back(x);
	}
	int tmp=n;
	while(tmp%f[0]==0)
		tmp/=f[0],cnt++;
	for(auto& x : f) {
		int ck=0;
		tmp = n;
		while(tmp%x==0) 
			tmp/=x, ck++;
		if(ck != cnt) {
			cout << "NO\n";
			return;
		}
	}
	cout << cnt << "\n";
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	sieve();
	int q;
	cin >> q;
	while(q--) solve();
	return 0;
}
