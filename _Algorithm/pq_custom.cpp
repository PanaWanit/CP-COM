/*
	Task: pq pair custom comparator
	Author: Pana Wanit
	Lang: C++
	School: N/a
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<int,pii> pip;
auto cmp = [](const pip& a, const pip& b){return a.first > b.first || (a.first==b.first && a.second.first < b.second.first);};
priority_queue<pip,vector<pip>,decltype(cmp)> pq(cmp);
void print(const pip& a){
	cout << a.first << " " << a.second.first << " " << a.second.second << "\n";
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n;
	cin >> n;
	while(n--){
		int f,s,ss;
		cin >> f >> s >> ss;
		pq.emplace(f,pii(s,ss));
	}
	while(!pq.empty()){
		print(pq.top());
		pq.pop();
	}
	return 0;
}
