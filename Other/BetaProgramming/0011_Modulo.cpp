#include<bits/stdc++.h>
using namespace std;
bool used[50];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int cnt=0;
	for(int i=0,x; i<10; i++) {
		cin >> x;
		cnt += !used[x%42];
		used[x%42]=1;
	}
	cout << cnt << "\n";
	return 0;
}

