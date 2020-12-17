/*
	TASK : KU01-3rd-drone
	AUTHOR : Pana Wanit
	LANG : C++
*/
#include<bits/stdc++.h>
using namespace std;
const int mxN = 1000;
int a[mxN], num[200*10];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=0; i<200; i++) {
		num[i*10] = i+1;
		for(int j=1; j<10; j++)
			num[i*10+j] = (i+1)*2;
	}
	for(int i=0; i<n; i++)
		cin >> a[i];
	sort(a, a+n, greater<int>());
	sort(num, num+(200*10));
	int sum=0;
	for(int i=0; i<n; i++) 
		sum += num[i]*a[i];
	cout << sum << "\n";
	return 0;
}
