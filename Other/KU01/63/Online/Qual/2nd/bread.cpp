/*
	TASK : KU01-2nd-bread
	AUTHOR : Pana Wanit
	LANG : C++
*/
#include<bits/stdc++.h>
using namespace std;

#define vt vector
#define FOE(x, a) for(auto& x: a)
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int w,h,m,n;
	cin >> w >> h >> m >> n;
	int old,nw;
	vt<int> a,b;

	cin >> old;
	a.push_back(old);
	while(--m) {
		cin >> nw;
		a.push_back(nw-old);
		old = nw;
	}
	a.push_back(w-old);
	cin >> old;
	b.push_back(old);
	while(--n) {
		cin >> nw;
		b.push_back(nw-old);
		old = nw;
	}
	b.push_back(h-old);

	sort(a.begin(), a.end(), greater<int>());
	sort(b.begin(), b.end(), greater<int>());

	cout << a[0]*b[0] << " " << max(a[0]*b[1], a[1]*b[0]) << "\n";
	return 0;
}
