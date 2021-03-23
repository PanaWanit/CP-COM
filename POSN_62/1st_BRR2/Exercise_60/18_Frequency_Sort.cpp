/*
 	TASK : Frequency Sort
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN =1e3;
struct F{
	int num,idx,f;
	bool operator < (const F&o ) const{
		return (f > o.f || (f == o.f && idx < o.idx ) );
	}
} a[mxN];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,c,p=0;
	cin >> n >> c;
	for(int i=0; i<n; i++){
		int x,ch=0;
		cin >> x;
		for(int j=0; j<1000; j++){
			if(a[j].num == x){
				a[j].f++,ch=1;
			}
		}
		if(!ch) a[p].num = x , a[p].idx = i , a[p++].f = 1;
	}
	sort(a,a+p);
	for(int i=0; i<p; i++){
		for(int j=0; j<a[i].f; j++) cout << a[i].num << " ";
	}
	return 0;
}
