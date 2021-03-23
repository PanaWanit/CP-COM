#include<bits/stdc++.h>
using namespace std;
#define deg(x) (x)*sqrt(2)/2
#define power(x) x*x
unordered_map<char, double> mp{
	{'N', 1}, {'E', 1}, {'W', -1}, {'S', -1}
};
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	string a;
	cin >> a;
	double x=0, y=0;
	while(a[0] != '*') {
		int n = (int)a.size();
		if(isalpha(a[n-1])&&isalpha(a[n-2])) {
			double dis = stold(a.substr(0, n-2));
			x += deg(dis*mp[a[n-1]]);
			y += deg(dis*mp[a[n-2]]);
		}
		else {
			double dis = stold(a.substr(0, n-1));
			if(a[n-1]=='N' || a[n-1]=='S')
				y += dis*mp[a[n-1]];
			else
				x += dis*mp[a[n-1]];
		}
		cin >> a;
	}
	cout << fixed << setprecision(3);
	cout << x << " " << y << "\n";
	cout << sqrt(power(x)+power(y)) << "\n";
	return 0;
}
