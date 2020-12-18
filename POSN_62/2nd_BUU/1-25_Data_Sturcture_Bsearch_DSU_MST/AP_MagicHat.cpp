#include<bits/stdc++.h>
using namespace std;

const int mxTime = 2e5+10;
struct Heap_Struct {
	int mk, type, w, v; //mk time_stamp
	bool operator < (const Heap_Struct& o) const {
		return w > o.w;
	}
};
struct Heap_time {
	int mk, time, change,v; // mk time_stamp, change == 0 -> type = 2
	bool operator < (const Heap_time& o) const {
		return time > o.time;
	}
};
priority_queue<Heap_Struct> pq;
priority_queue<Heap_time> time_cmp;
bool mark[mxTime];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m;
	cin >> n >> m;
	for(int now_time=1,opr; now_time<=n+m; now_time++) {
		cin >> opr;
		if(opr == 1) {
			int type, w, v, time, change=0;
			cin >> type >> w >> v;
			pq.push({now_time, type, w, v});
			if(type >= 2) {
				cin >> time;
				if(type == 3) cin >> change;
				time_cmp.push({now_time, time, change,v});
			}
		}
		if(opr == 2) {
			bool ch=0;
			while(!pq.empty()) {
				auto now = pq.top();
				if(now.type >= 2 && mark[now.mk]) pq.pop(); // used pop out
				else {
					ch=1;
					mark[now.mk]=1;
					pq.pop();
					cout << now.v << "\n";
					break;
				}
			}
			if(!ch) cout << 0 << "\n";
		}
		while(!time_cmp.empty()) { // type 2,3 time_out
			auto top = time_cmp.top();
			if(now_time<top.time) break;
			if(top.change!=0&&!mark[top.mk]) pq.push({0, 1, top.change, top.v}); //type3
			mark[top.mk]=1;
		   	time_cmp.pop();
		}
	}
	return 0;
}
