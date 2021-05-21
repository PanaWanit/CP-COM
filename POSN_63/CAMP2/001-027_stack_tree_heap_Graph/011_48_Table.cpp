#include<bits/stdc++.h>
using namespace std;
struct Heap {
	int i,j,num,t;
	bool operator < (const Heap& o) const {
		return num > o.num;
	}
};
priority_queue<Heap> pq;
struct Table{
	int last_set=0, num=0;
} a[305][5010];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int r,c,m;
	cin >> r >> c >> m;
	for(int i=1; i<=r; ++i)
		for(int j=1; j<=c; ++j)
			pq.push({i, j, 0, 0});
	for(int i=1,opr; i<=m; ++i) {
		cin >> opr;
		if(opr==1) {
			int x,y,k;
			cin >> x >> y >> k;
			a[x][y].last_set=i, a[x][y].num=k;
			pq.push({x, y, k, i});
		}
		else if(opr==2) {
			int x,k;
			cin >> x >> k;
			a[x][0].last_set=i, a[x][0].num=k;
			pq.push({x, 0, k, i});
		}
		else if(opr==3) {
			int x,y;
			cin >> x >> y;
			if(a[x][0].last_set>a[x][y].last_set)
				cout << a[x][0].num << "\n";
			else cout << a[x][y].num << "\n";
		}
		else {
			bool ch=0;
			while(!pq.empty()&&!ch) {
				Heap t = pq.top();
				if(t.j==0) { // set all row
					if(a[t.i][0].last_set != t.t) {
						pq.pop(); continue;
					}
					int cnt=0;
					for(int j=1; j<=c; ++j)
						cnt += a[t.i][j].last_set>t.t;
					if(cnt==c)
						pq.pop();
					else cout << t.num << "\n", ch=1;
				}
				else {
					if(a[t.i][t.j].last_set != t.t || a[t.i][0].last_set>a[t.i][t.j].last_set)
						pq.pop();
					else cout << t.num << "\n", ch=1;
				}
			}
		}
	}
	return 0;
}

