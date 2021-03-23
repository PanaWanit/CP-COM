#include<bits/stdc++.h>
using namespace std;
const int mxN = 3e3+1;
int a[mxN];
void solve(){
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		a[i] *= (i%2?1:-1);
		a[i] += a[i-1];
	}
	if(!a[n]){
		for(int i=1;i<=n;i++){
			cout << a[i] * (i%2?1:-1) << " ";
		}
		cout << "\n";
		return;
	}

}

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int t;
	for(cin >> t;t--;){
		solve();
	}
	return 0;
}
