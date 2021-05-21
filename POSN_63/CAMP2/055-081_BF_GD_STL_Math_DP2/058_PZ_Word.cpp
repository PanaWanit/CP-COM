#include<bits/stdc++.h>
using namespace std;
int cnt[30], mk[30];
void query() {
	string a;
	cin >> a;
	for(int i=0; a[i]; ++i)
		cnt[a[i]-'a']++, mk[a[i]-'a']=1;
	vector<int> v;
	for(int i=0; a[i]; ++i) {
		--cnt[a[i]-'a'];
		if(cnt[a[i]-'a']==0)
			v.push_back(a[i]-'a');
	}
	int last=0;
	for(int p=0; p<(int)v.size(); ++p) {
		for(int i=last; i<v[p]; ++i)
			if(!mk[i]) cout << char(i+'a');
		cout << char(v[p]+'a'), last=max(v[p]+1, last);
	}
	for(int i=last; i<26; ++i)
		if(!mk[i]) cout << char(i+'a');
	cout << "\n";
	memset(mk, 0, sizeof(mk));
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int Q;
	cin >> Q;
	while(Q--)
		query();
	return 0;
}

