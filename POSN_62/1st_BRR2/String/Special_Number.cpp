/*
 	TASK : Special Number
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	for(int t=5;t--;){
		string a;
		cin >> a;
		int sum=0 , len = (int)a.size();
		for(int i=0; i<len; i++){
			int mul=1;
			for(int j=0; j<=i; j++){
				mul *= a[i]-'0';
			}
			sum += mul;
		}
		if(sum == stoi(a)) cout << "Y";
		else cout << "N";
	}
	cout << "\n";
	return 0;
}
