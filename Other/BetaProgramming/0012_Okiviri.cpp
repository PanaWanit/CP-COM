#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	string a;
	cin >> a;
	int n=(int)a.size();
	cout << ".";
	for(int i=0; i<n; i++) {
		cout << "." << (i%3==2?"*":"#") << "..";
	}cout << "\n.";
	for(int i=0; i<n; i++) {
		cout << (i%3==2?"*":"#") << "." << (i%3==2?"*":"#") << ".";
	}cout << "\n#";
	for(int i=0;  i<n; i++) {
		if(i%3==0) cout << "." << a[i] << ".#";
		else if(i%3!=0&&n%3==2&&i==n-1) cout << "." << a[i] << ".#";
		else if(i%3==1) cout << "." << a[i] << ".*";
		else if(i%3==2) cout << "." << a[i] << ".*";
	}cout << "\n.";
	for(int i=0; i<n; i++) {
		cout << (i%3==2?"*":"#") << "." << (i%3==2?"*":"#") << ".";
	}cout << "\n.";
	for(int i=0; i<n; i++) {
		cout << "." << (i%3==2?"*":"#") << "..";
	}
	cout << "\n";
	return 0;
}

