#include<bits/stdc++.h>
using namespace std;
struct Soldier {
	int rank, id, idx;
	bool operator < (const Soldier& o) const {
		if(rank!=o.rank) return rank < o.rank;
		return idx>o.idx;
	}
};
priority_queue<Soldier> pq;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,r;
	cin >> n >> r;
	for(int i=0; i<n; ++i) {
		int cmd;
		cin >> cmd;
		if(cmd==2) {
			if(pq.empty()) cout << -1 << "\n";
			else cout << pq.top().id << "\n", pq.pop();
		}
		else {
			int rank, id;
			cin >> id >> rank;
			pq.push({rank, id, i});
		}
	}
	return 0;
}

