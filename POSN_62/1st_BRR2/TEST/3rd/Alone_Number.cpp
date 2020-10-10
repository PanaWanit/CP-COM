/*
 	TASK : Alone Number
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 1000;
struct A{
	int idx,freq,num;
	bool operator < (const A&o ) const{
		return freq < o.freq || (freq == o.freq && idx < o.idx) ;
	}
} a[mxN];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,p=0,idx=0;
	cin >> n;
	while(n--){
		int x,ch=1;
		cin >> x;
		for(int i=0; i<p+1; i++){
			if(x == a[i].num) ch=0,a[i].freq++;
		}
		if(ch) a[p++] = {idx,1,x};
		idx++;
	}
	sort(a,a+p);
	for(int i=0; i<p; i++){
		if(a[i].freq == 1) cout << a[i].num << " ";
		else break;
	}
	return 0;
}
