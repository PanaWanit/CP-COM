#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ar array
#define vt vector
#define FOE(x, a) for(auto& x: a)
const int mxTime = 2e5+10;
struct Heap_Struct {
	int now_time, type, w, v, time_change, change;
	bool operator < (const Heap_Struct& o) const {
		return w > o.w;
	}
};
struct Heap_time {
	int now_time, time, change,v; // now_time use for mark, change == 0 -> type = 2
	bool operator < (const Heap_time& o) const {
		return time > o.time || (time==o.time && change>o.change);
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
			if(type == 1) {
				pq.push({now_time, type, w, v, mxTime, 0});
			}
			if(type >= 2) {
				cin >> time;
			    if(type == 3) cin >> change;
				pq.push({now_time, type, w, v, time, change});
				time_cmp.push({now_time, time, change,v});
			}
		}
		if(opr == 2) {
			bool ch=0;
			while(!pq.empty()) {
				if(pq.top().type >= 2 && mark[pq.top().now_time]) pq.pop(); // used pop out
				else {
					cout << pq.top().v << "\n";
					pq.pop();
					ch=1;
					break;
				}
			}
			if(!ch) cout << 0 << "\n";
		}
		while(!time_cmp.empty() &&  now_time >= time_cmp.top().time){ // type 2,3 time_out
			mark[time_cmp.top().now_time]=1;
			if(time_cmp.top().change > 0) pq.push({mxTime,1,time_cmp.top().change,time_cmp.top().v,mxTime,0});//type 3
		   	time_cmp.pop();
		}
	}
	return 0;
}
