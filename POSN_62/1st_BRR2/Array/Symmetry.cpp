/*
 	TASK : Symmetry
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,mid=-1,mx=-1,cnt=0,last=0,i=0;
	cin >> n;
	while(n--){
		i++;
		bool x;
		cin >> x;
		if(x){
			if(cnt > mx && cnt && cnt%2){
				mx = cnt;
				mid = last+cnt/2;
			}
			last = i;
			cnt=0;
			continue;
		}
		cnt++;
	}
	cout << mid << "\n";
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int q;
	for(cin >> q;q--;) solve();
	return 0;
}
