#include<bits/stdc++.h>
using namespace std;
int a[9];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int sum=0;
	for(int i=0; i<9; i++)
		cin >> a[i], sum+=a[i];
	for(int i=0; i<8; i++) {
		for(int j=i+1; j<9; j++) {
			if(sum-a[i]-a[j]==100) {
				a[i]=a[j]=-1;
			}
		}
	}
	for(int i=0; i<9; i++)
		if(a[i]!=-1) cout << a[i] << "\n";
	return 0;
}

