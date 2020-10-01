/*
 	TASK : Wheel
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
int a[101] , b[21];
bool used[101];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,k,last=0;
	cin >> n >> k;
	for(int i=0; i<n; i++) cin >> a[i];
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		for(int i=0; i<=x; i++){ // need to check used[x+1];
			if(used[last++%n]) i--;
		}//last end => a[x+1]
		last--; // idx-1
		b[i%k] += a[last%n];
		used[last%n]=1;
	}
	for(int i=0; i<k; i++) cout << b[i] << "\n";
	return 0;
}
