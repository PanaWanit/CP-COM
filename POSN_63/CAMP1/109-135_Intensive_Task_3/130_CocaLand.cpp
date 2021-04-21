#include<bits/stdc++.h>
using namespace std;
struct Time {
	int val, end, type, change;
	bool operator < (const Time& o) const {
		if(val!=o.val) return val>o.val;
		return type>o.type;
	}
};
priority_queue<Time> pq;
int type_change(int t) {
	if(t==3) return 1;
	if(t==1) return 2;
	return 3;
}
const int END=1e5+10;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	for(int i=0; i<t; ++i) {
		while(!pq.empty() && i>=pq.top().end) {
			if(pq.top().change==-1) pq.pop();
			else {
				Time T=pq.top();
				pq.pop();
				pq.push({T.change, END, T.type, -1});
			}
		}
		int type, val, end, change;
		cin >> type;
		if(type==4) {
			if(!pq.empty()) cout << pq.top().val << "\n", pq.pop();
			else cout << "GREAN\n";
		}
		if(type==1) {
			cin >> val >> end;
			pq.push({val, end, type_change(type), -1});
		}
		if(type==2) {
			cin >> val;
			pq.push({val, END, type_change(type), 0});
		}
		if(type==3) {
			cin >> val >> end >> change;
			pq.push({val, end, type_change(type), change});
		}
	}
	return 0;
}

