/*
 	TASK : Word Chain
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n , q;
	string a,b;
	for(cin >> n >> q >> a;--q;){
		cin >> b;
		bool ch=0;
		for(int i=0,cnt=0; i<n; i++){
			if(a[i] != b[i]) cnt++;
			if(cnt > 2 ) {ch=1;break;}
		}
		if(ch) {
			cout << a << "\n";
			return 0;
		}
		a = b;
	}
	return 0;
}
