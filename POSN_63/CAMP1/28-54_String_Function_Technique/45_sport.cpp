#include<bits/stdc++.h>
using namespace std;
int a[105],n;
void play(int st, int w, int l) {
	if(w==n||l==n) {
		for(int i=0; i<st; ++i)
			cout << (a[i]?"L":"W") << " ";
		cout << "\n";
		return;
	}
	a[st]=0; // 0 win 1 lose
	play(st+1, w+1, l);
	a[st]=1;
	play(st+1, w, l+1);
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int w,l;
	cin >> n >> w >> l;
	play(0,w, l);
	return 0;
}
