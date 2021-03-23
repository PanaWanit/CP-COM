#include<bits/stdc++.h>
using namespace std;
#define FOE(x, a) for(auto& x : a)
//infix -> propostfix
stack<int> num, st_opr;
void calc() {
	int opr;
	double sum=0;
	for(int i=2; i--;)
		sum += (double)num.top(), num.pop();
	opr = st_opr.top(), st_opr.pop();
	num.push(int(sum + ((2<<opr)*sum/100)));
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	string a;
	cin >> a;
	FOE(x, a) {
		if(isalpha(x)) 
			num.push(20);
		else if(isdigit(x)) {
			int o = x-'0';
			while(!st_opr.empty() && o <= st_opr.top() && st_opr.top()!=0) calc();
			st_opr.push(o);
		}
		else if(x=='[')
			st_opr.push(0);
		else {
			while(!st_opr.empty() && st_opr.top()!=0)
				calc();
			st_opr.pop();
		}
	}
	while(!st_opr.empty())
		calc();
	cout << num.top() << "\n";
	return 0;
}
