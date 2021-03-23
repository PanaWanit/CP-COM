#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e6+1;
priority_queue<pair<int,int>> pq; // f=scr,s=node
int score[mxN];
bool used[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,l,r;
	char opr;
	cin >> n >> l >> r;
	for(int i=1; i<=n; ++i)
		pq.push(make_pair(0, i));
	for(int i=0; i<l+r; ++i) {
		cin >> opr;
		if(opr=='L'||opr=='C') {
			int x,y;
			cin >> x >> y;
			score[y] += (opr=='L'?1:3);
			pq.push(make_pair(score[y], y));
			used[y]=1;
		}
		else if(opr=='R'||opr=='D') {
			while(!used[pq.top().second])
				pq.pop();
			if(opr=='D') used[pq.top().second]=0, pq.pop();
			else if(opr=='R')
				cout << pq.top().second << "\n";
		}
	}
	return 0;
}
