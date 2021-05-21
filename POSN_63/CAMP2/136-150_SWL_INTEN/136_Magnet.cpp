#include<bits/stdc++.h>
using namespace std;
#define sz(x) (int)(x).size()
vector<int> a,b;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m,q,u,v;
	cin >> n >> m >> q;
	while(m--) {
		cin >> u >> v;
		a.push_back(u), a.push_back(u+v);
	}
	sort(a.begin(), a.end());
	for(int i=0,j; i<sz(a); i=j) {
		for(j=i+1; j<sz(a) && a[i]==a[j]; ++j);
		if((j-i)%2==1)
			b.push_back(a[i]);
	}
	while(q--) {
		cin >> u;
		if(u<b[0]) cout << b[0]-1 << "\n";
		else if(u>=b.back()) cout << n-b.back()+1 << "\n";
		else {
			v=upper_bound(b.begin(), b.end(), u)-b.begin();
			cout << b[v]-b[v-1] << "\n";
		}
	}
	return 0;
}

