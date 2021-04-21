#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+100;
struct Query {
	int idx, event, ans;
} q[mxN];
struct Event {
	int idx,val;
} a[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m,t;
	cin >> n >> m >> t;
	for(int i=0; i<m; ++i) {
		cin >> a[i].idx >> a[i+m].idx;
		a[i].val=1, a[i+m].val=-1;
		++a[i+m].idx;
	}
	sort(a, a+2*m, [](const Event& a, const Event& b) {
			return a.idx < b.idx;
			});
	for(int i=0; i<2*m; ++i)
		cerr << "(" << a[i].idx << " " << a[i].val << ")" << endl;
	for(int i=0; i<t; ++i) {
		cin >> q[i].event;
		q[i].idx=i;
	}
	sort(q, q+t, [](const Query& a, const Query& b) {
			return a.event < b.event;
			});
	int p=0,event=0;
	for(int i=0; i<t; ++i) {
		while(q[i].event>=a[p].idx) {
			event += a[p].val;
			++p;
		}
		q[i].ans = event;
	}
	sort(q, q+t, [](const Query& a, const Query& b) {
			return a.idx < b.idx;
			});
	for(int i=0; i<t; ++i)
		cout << "ans:" << q[i].ans << "\n";
	return 0;
}

