#include<bits/stdc++.h>
using namespace std;
int ans[6];// i v x l c
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		int q = i;
		while(q){
			if(q >= 100) q-=100 , ans[5]++;
			else if(q >= 90) q-=90 , ans[5]++ , ans[3]++;
			else if(q >= 50) q-=50 , ans[4]++;
			else if(q >= 40) q-=40 , ans[3]++ , ans[4]++;
			else if(q >= 10) q-=10 , ans[3]++;
			else if(q >= 9) q-=9 , ans[1]++ , ans[3]++ ;
			else if(q >= 5) q-=5 , ans[2]++;
			else if(q >= 4) q-=4 , ans[1]++,ans[2]++;
			else q-- , ans[1]++;
		}
	}
	for(int i=1;i<=5;i++) cout << ans[i] << " " ;
	return 0;
}
