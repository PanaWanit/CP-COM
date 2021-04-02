#include<bits/stdc++.h>
using namespace std;
string a[10000];
int main() {
	int n,t,len;
	scanf("%d %d %d", &n, &t, &len);
	for(int i=0; i<n; i++)
		cin >> a[i];
	sort(a, a+n);
	while(t--) {
		string b;
		cin >> b;
		if(*lower_bound(a, a+n, b) == b) cout << "Accepted\n";
		else cout << "Rejected\n";
	}
	return 0;
}

