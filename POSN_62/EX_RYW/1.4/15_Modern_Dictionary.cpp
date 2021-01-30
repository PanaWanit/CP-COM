#include<bits/stdc++.h>
using namespace std;
#define vt vector
#define FOE(x, a) for(auto& x: a)
#define sz(x) (int)(x).size()
const int mxN = 110, char_range ='z'-'a'+1;
string a[mxN];
int in[char_range];
vt<int> adj[char_range];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	memset(in, -1, sizeof(in));
	for(int i=0; i<n; i++) {
		cin >> a[i];
		FOE(x, a[i])
			in[x-'a']=0;
	}
	for(int i=0; i<n-1; i++) {
		for(int j=0; j<min(sz(a[i]), sz(a[i+1])); j++) {
			if(a[i][j] != a[i+1][j]) {
				adj[a[i][j]-'a'].push_back(a[i+1][j]-'a'), in[a[i+1][j]-'a']++;
				break;
			}
		}
	}
	queue<int> qu;
	for(int i=0; i<char_range; i++) {
		if(!in[i]) qu.push(i);
	}
	bool ch=0;
	vt<int> ans;
	while(!qu.empty()) {
		if(sz(qu)>1) ch=1;
		int u = qu.front();
		ans.push_back(u);
		qu.pop();
		FOE(x, adj[u]) {
			--in[x];
			if(!in[x]) qu.push(x);
		}
	}
	for(int i=0; i<char_range; i++) {
		if(in[i]>0) {
			cout << "!\n";
			return 0;
		}
	}
	if(ch) cout << "?\n";
	else {
		FOE(x, ans)
			cout << (char)(x+'a');
		cout << "\n";
	}
	return 0;
}
