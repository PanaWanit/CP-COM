/*
 	TASK : Sort N M
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 1001;
int sz;
struct A{
	int order[mxN];
	bool operator < (const A&o) const{
		for(int i=0;i<sz;i++){
			if(order[i] != o.order[i]) return order[i] < o.order[i];
		}
	}
} a[mxN]; 
int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int n;
	// sol 1
	cin >> n >> sz;
	for(int i=0; i<n; i++){
		for(int j=0 ;j<sz; j++){
			cin >> a[i].order[j];
		}
	}
	sort(a,a+n);
	for(int i=0; i<n; i++){
		for(int j=0; j<sz; j++){
			cout << a[i].order[j] << " ";
		}
		cout << "\n";
	}
	// sol2
	/*vector<vector<int>> g;
	for(int i=0; i<n; i++) {
		vector<int> p;
		for(int j=0,x; j<n; j++){
			cin >> x;
			p.push_back(x);
		}
		g.push_back(p);
	}
	sort(g.begin(),g.end());
	*/
	return 0;
}
