#include<bits/stdc++.h>
using namespace std;
#define sz(x) (int)(x).size()
stack<int> st;
int opr(int& a, int& b, char& opr) {
	if(opr == '+') return a+b;
	if(opr == '-') return a-b;
	else return a*b;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n, ans=0;
	string input;
	cin >> n;
	while(n--) {
		cin >> input;
		char c = input[0];
		if(isdigit(c)) {
			st.push(stoi(input));
		}
		else {
			if(sz(st)<2) {
				cout << "No Solution\n";
				return 0;
			}
			int second = st.top(); st.pop();
			int first = st.top(); st.pop();
			st.push(opr(first, second, c));
		}
	}
	cout << st.top() << "\n";
	return 0;
}
