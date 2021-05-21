#include<bits/stdc++.h>
using namespace std;

#define ll long long
void query() {
	ll s,p;
	cin >> s >> p;
	ll lb=0ll, rb=s/2;
	while(lb<=rb) {
		ll mb=(lb+rb)/2, b=s-mb;
		if(mb*b>p||mb*b/b!=mb) rb=mb-1;
		else if(mb*b<p) lb=mb+1;
		else {
			cout << mb << " " <<  b << "\n";
			return;
		}
	}
	cout << "No answer\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int Q;
	cin >> Q;
	while(Q--)
		query();
	return 0;
}

