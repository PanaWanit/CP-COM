#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,m;
	cin >> n >> m;
	string a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	for(int i=0;i<m;i++) {
		int x;
		cin >> x;
		if(x==0) continue;
		int z=0;
		while(z < n && a[z][i]=='.') z++;

		while(x-- && z--) a[z][i] = '#';
	}
	for(int i=0;i<n;i++) cout << a[i] << "\n";
	return 0;
}
