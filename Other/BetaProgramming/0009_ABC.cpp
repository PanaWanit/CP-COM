#include<bits/stdc++.h>
using namespace std;
int a[3];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	for(int i=0; i<3; i++)
		cin >> a[i];
	for(int i=0; i<2; i++) {
		for(int j=i+1; j<3; j++)
			if(a[i]>a[j]) swap(a[i],a[j]);
	}
	for(int i=0; i<3; i++) {
		char c;
		cin >> c;
		cout << a[c-'A'] << " ";
	}
	cout << "\n";
	return 0;
}

