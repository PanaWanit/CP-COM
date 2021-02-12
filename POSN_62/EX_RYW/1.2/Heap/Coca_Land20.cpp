#include<bits/stdc++.h>
using namespace std;
struct A {
	int val, dead, type, change;
	bool operator < (const A& o) const {
		if(val!=o.val) return val > o.val;
		return type > o.type;
	}
};
// normal 2 , change 1, undead 3
priority_queue<A> pq;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	for(int i=0; i<t; i++) {
		//pop out + change
		while(!pq.empty() && i>=pq.top().dead) {
			if(pq.top().type==1) {
				int c = pq.top().change;
				pq.pop();
				pq.push({c, (int)1e9, 1});
			}
			else pq.pop();
		}
		int opr;
		cin >> opr;
		if(opr == 1) {
			int a,b;
			cin >> a >> b;
			pq.push({a, b, 2});
		}
		else if(opr == 2) {
			int a;
			cin >> a;
			pq.push({a, (int)1e9, 3});
		}
		else if(opr == 3) {
			int a,b,c;
			cin >> a >> b >> c;
			pq.push({a, b, 1, c});
		}
		else {
			if(pq.empty()) cout << "GREAN\n";
			else cout << pq.top().val << "\n", pq.pop();
		}
	}
	return 0;
}
