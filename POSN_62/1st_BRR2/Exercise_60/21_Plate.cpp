/*
 	TASK : Plate TOI1
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 1001;
int id[mxN];
queue<int> cq, idq[11];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int c,n;
	char opr;
	cin >> c >> n;
	for(int i=0; i<n; i++) {
		int d, cls;
		cin >> cls >> d;
		id[d] = cls;
	}
	cin >> opr;
	while(opr != 'X') {
		int d;
		switch(opr) {
			case 'E':
				cin >> d;
				if(idq[id[d]].empty())
					cq.push(id[d]);
				idq[id[d]].push(d);
				break;
			case 'D':
				if(cq.empty()) {cout << "empty\n";break;}
				cout << idq[cq.front()].front() << "\n";
				idq[cq.front()].pop();
				if(idq[cq.front()].empty())
					cq.pop();
				break;
		}
		cin >> opr;
	}
	cout << "0\n";
	return 0;
}
