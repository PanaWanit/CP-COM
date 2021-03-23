/*
 	TASK : Parenthesis V4 using bit mask
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
#define sz(x) (int)(x).size()
vector<int> ans;
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,base;
	cin >> n;
	base = n*2-1; 
	// (1<<n)-1 -> start (((...()...))) 000...0011...111
	// (1<<(base))-> 1xxxxxxx start with close bracket
	// do [(1<<n)-1, 1<<base)
	for(int i=(1<<n)-1; i<(1<<(base)); i++) { // 0 open bracket , 1 close bracket
		int zero=0;
		for(int j=base; j>=0; j--) { 
			bool now_bit = (1<<j)&i;
			zero += now_bit==0;
			zero -= now_bit==1;
			if(zero<0) break;
		}
		if(zero==0) ans.push_back(i);
	}
	cout << sz(ans) << "\n";
	for(int i=0; i<sz(ans); i++) {
		for(int j=base; j>=0; j--)
			if((1<<j)&(ans[i])) cout << ")";
			else cout << "(";
		cout << "\n";
	}
	return 0;
}
