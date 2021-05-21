#include<bits/stdc++.h>
using namespace std;
#define sz(x) (int)(x).size()
const int mxN=30;
string a[110];
vector<int> adj[mxN];
set<char> s;
int in[mxN],mk[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	cin >> a[1];
	for(int i=2; i<=n; ++i) {
		cin >> a[i];
		int ssz = min(sz(a[i]), sz(a[i-1]));
		for(int j=0; j<ssz; ++j) {
			if(a[i][j]==a[i-1][j]) continue;
			adj[a[i-1][j]-'a'].push_back(a[i][j]-'a');
			++in[a[i][j]-'a'];
			mk[a[i-1][j]-'a']=mk[a[i][j]-'a']=1;
			break;
		}
	}
	for(int i=1; i<=n; ++i)
		for(auto& x : a[i])
			s.insert(x);
	queue<int> pq;
	for(int i=0; i<26; ++i)
		if(!in[i]&&mk[i]) pq.push(i);
	vector<char> ans;
	bool ch=0;
	while(!pq.empty()) {
		if(sz(pq)>1) ch=1;
		int u = pq.front();
		ans.push_back(u+'a');
		pq.pop();
		for(auto& x : adj[u]) {
			--in[x];
			if(!in[x]) pq.push(x);
		}
	}
	for(int i=0; i<26; ++i) {
		if(in[i]) {
			cout << "!\n";
			return 0;
		}
	}
	if(sz(ans)==sz(s)&&!ch) {
		for(auto& x : ans) cout << x;
	}
	else cout << "?";
	cout << "\n";
	return 0;
}
