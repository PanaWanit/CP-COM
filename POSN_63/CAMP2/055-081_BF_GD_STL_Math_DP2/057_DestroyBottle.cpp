#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+10;
struct Heap {
	int num,idx;
	bool operator < (const Heap& o) const {
		return num<o.num;
	}
};
int mk[mxN];
priority_queue<Heap> pq;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,t;
	cin >> n >> t;
	for(int i=1,x; i<=n; ++i) {
		cin >> x;
		pq.push({x, i});
	}
	for(int i=1; i<=t; ++i) {
		int h,cnt=0;
		cin >> h;
		while(!pq.empty()&&pq.top().num>h) {
			int idx=pq.top().idx;
			if(mk[idx]&&mk[idx]!=i) pq.pop();
			else {
				if(!mk[idx]) mk[idx]=i, ++cnt;
				if(idx+1<=n&&!mk[idx+1]) ++cnt, mk[idx+1]=i;
				if(idx-1>=1&&!mk[idx-1]) ++cnt, mk[idx-1]=i;
				pq.pop();
			}
		}
		cout << cnt << "\n";
	}
	return 0;
}
