#include<bits/stdc++.h>
using namespace std;
const int mxN = 7e4+10;
int a[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int l,t,n;
	char d;
	cin >> l >> t >> n;
	t%=2*l;
	for(int i=0,x; i<n; ++i) {
		cin >> x >> d;
		int dir = (d=='L'?-1:1);
		a[i] = ((x+dir*t)%(2*l)+(2*l))%(2*l);
		if(a[i]>=l) a[i]=2*l-a[i];
	}
	sort(a, a+n);
	for(int i=0; i<n; ++i)
		cout << a[i] << " ";
	cout << "\n";
	return 0;
}

