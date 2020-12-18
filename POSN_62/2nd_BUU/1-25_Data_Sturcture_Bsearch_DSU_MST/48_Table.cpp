#include<bits/stdc++.h>
using namespace std;
struct Heap {
	int i, j, v, idx;
	bool operator < (const Heap& o) const {
		return v > o.v;
	}
}; 
struct COR{int v, idx;} a[301][5001];
priority_queue<Heap> pq;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int r,c,m;
	cin >> r >> c >> m;
	for(int i=1; i<=r; i++)
		for(int j=1; j<=c; j++)
			pq.push({i, j, 0, 0});
	for(int it=1; it<=m; it++) {
		int opr,ni,nj,v;
		cin >> opr;
		switch(opr) {
			case 1:
				cin >> ni >> nj >> v;
				a[ni][nj] = {v, it};
				pq.push({ni, nj, v, it});
				break;
			case 2:
				cin >> ni >> v;
				a[ni][0] = {v, it};
				pq.push({ni, 0, v, it});
				break;
			case 3:
				cin >> ni >> nj;
				cout << (a[ni][nj].idx>a[ni][0].idx?a[ni][nj].v:a[ni][0].v) << "\n";
				break;
			default:
				while(!pq.empty()) {
					auto t = pq.top();
					if(t.j == 0) {
						bool all_filled=1;
						for(int i=1; i<=c; i++) {
							if(a[t.i][i].idx < t.idx) {
								all_filled=0;
								break;
							}
						}
						if(all_filled) pq.pop();
						else {
							cout << t.v << "\n";
							break;
						}
					}
					else {
						if(a[t.i][t.j].idx < a[t.i][0].idx || a[t.i][t.j].idx != t.idx) 
							pq.pop();
						else {
							cout << t.v << "\n";
							break;
						}
					}
				}
		}
	}
	return 0;
}
