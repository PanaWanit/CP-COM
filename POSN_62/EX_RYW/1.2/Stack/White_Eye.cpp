#include<bits/stdc++.h>
using namespace std;
stack<int> st;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m,h,cnt=0;
	cin >> n >> m;
	n+=m;
	while(n--) {
		char opr;
		cin >> opr;
		if(opr=='A') {
			cin >> h;
			while(!st.empty()&&h>=st.top())
				st.pop();
			st.push(h);
		}
		else cout << (int)st.size() << "\n";
	}
	return 0;
}
