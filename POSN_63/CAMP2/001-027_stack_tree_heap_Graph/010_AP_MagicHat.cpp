#include<bits/stdc++.h>
using namespace std;
#define sz(x) (int)(x).size()
const int mxN = 2e5+10;
bool mk[mxN];
struct Heap {
	int w,v,idx;
	bool operator < (const Heap& o) const {
		return w > o.w;
	}
};
struct Time {
	int t,change,idx,v;
	bool operator < (const Time& o) const {
		return t>o.t;
	}
};
priority_queue<Heap> pq;
priority_queue<Time> time_cmp;
void query(int idx) {
	while(sz(time_cmp)&&idx>=time_cmp.top().t) {
		auto t=time_cmp.top();
		time_cmp.pop();
		if(t.change!=-1&&!mk[t.idx]) pq.push({t.change, t.v, t.idx});
		else mk[t.idx]=1;
	}
	int opr,t,ed,w,v,c=-1;
	cin >> opr;
	if(opr==1) {
		cin >> t >> w >> v;
		pq.push({w, v, idx});
		if(t>=2) {
			cin >> ed;
			if(t==3) cin >> c;
			time_cmp.push({ed, c, idx, v});
		}
	}
	else {
		bool ch=0;
		while(sz(pq)) {
			auto t = pq.top();
			pq.pop();
			if(mk[t.idx]) continue;
			mk[t.idx]=1;
			cout << t.v << "\n";
			ch=1;
			break;
		}
		if(!ch) cout << 0 << "\n";
	}
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	cout << "\n";
	int n,m;
	cin >> n >> m;
	for(int i=0; i<n+m; ++i)
		query(i);
	return 0;
}

