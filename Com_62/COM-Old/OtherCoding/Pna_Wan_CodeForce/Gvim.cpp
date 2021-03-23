#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0;i<n;i++) cin >> a[i];
	if(n%2==0){
		for(int i=0;i<n;i+=2){
			swap(a[i],a[i+1]);
		}
		for(int i=0;i<n;i++) cout << a[i] << " ";
	}
	else {

	}
			

	cout << "\n";
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int t;
	for(cin >> t;t--;) solve();
	return 0;
}
