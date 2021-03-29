#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	string a;
	int lower=0, upper=0;
	cin >> a;
	for(int i=0; a[i]; i++) {
		lower+=islower(a[i]);
		upper+=isupper(a[i]);
	}
	if(lower&&upper) cout << "Mix\n";
	else if(lower) cout << "All Small Letter\n";
	else cout << "All Capital Letter\n";
	return 0;
}

