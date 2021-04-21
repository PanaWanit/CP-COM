#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	string a;
	int k,n,w,s,e,x,y;
	cin >> a >> k;
	n=e=w=s=x=y=0;
	for(char& c : a) {
		if(c=='N') ++y, ++n;
		if(c=='E') ++x, ++e;
		if(c=='W') --x, ++w;
		if(c=='S') --y, ++s;
	}
	while(k--) {
		if(n>s&&s!=0)
			++y, --s;
		else if(s>n&&n!=0)
			--y, --n;
		else if(w>e&&e!=0)
			--e, --x;
		else if(e>w&&w!=0)
			--w, ++x;
		else if(e)
			--x, --e;
		else if(w)
			++x, --w;
		else if(s)
			++y, --s;
		else if(n)
			--y, --n;
	}
	cout << 2*(abs(x)+abs(y)) << "\n";
	return 0;
}

