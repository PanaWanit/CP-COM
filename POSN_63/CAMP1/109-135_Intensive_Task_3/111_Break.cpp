#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,x,y;
	cin >> n >> x >> y;
	stack<pair<int,int>> st;
	st.emplace(x, y);
	for(int i=0,x,y; i<n-1; ++i) {
		cin >> x >> y;
		while(!st.empty()&&x>st.top().first)
			cout << st.top().second << "\n", st.pop();
		st.emplace(x, y);
	}
	return 0;
}

