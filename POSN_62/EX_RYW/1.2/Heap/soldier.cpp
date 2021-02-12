#include<bits/stdc++.h>
using namespace std;
struct A {
	int i, r, id;
	bool operator < (const A& o) const {
		if(r!=o.r) return r < o.r;
		return i > o.i;
	}
};
priority_queue<A> pq;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,r;
	cin >> n >> r;
	for(int i=0; i<n; i++) {
		int opr, id, ra;
		cin >> opr;
		if(opr==1) {
			cin >> id >> ra;
			pq.push({i, ra, id});
		}
		else {
			if(pq.empty()) cout << "-1\n";
			else cout << pq.top().id << "\n";
		}
	}
	return 0;
}
