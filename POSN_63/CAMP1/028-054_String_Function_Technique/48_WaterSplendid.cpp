#include<bits/stdc++.h>
using namespace std;
int b,c,a[10],tmp[10],cnt=0;
bool ch=0;
void dfs(int st=0, int now=0) {
	if(now>b) return;
	if(now==b||st==c) {
		if(now!=b) return;
		if(ch) {
			cout << st << " ";
			for(int i=0; i<st; ++i)
				cout << tmp[i] << " ";
			cout << "\nE\n";
		}
		else ++cnt;
		return;
	}
	for(int i=0; i<6; ++i) {
		tmp[st]=a[i];
		dfs(st+1, now+a[i]);
	}
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	cin >> b >> c;
	for(int i=0; i<6; ++i)
		cin >> a[i];
	dfs();
	cout << cnt << "\nE\n";
	ch=1;
	dfs();
	return 0;
}
