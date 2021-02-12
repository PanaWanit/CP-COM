#include<bits/stdc++.h>
using namespace std;
#define ar array
stack<ar<int, 2>> st;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	while(n--) {
		ar<int, 2> x;
		cin >> x[0] >> x[1];
		while(!st.empty() && x[0] > st.top()[0]) {
			cout << st.top()[1] << "\n";
			st.pop();
		}
		st.push(x);
	}
	cout << "\n";
	return 0;
}
