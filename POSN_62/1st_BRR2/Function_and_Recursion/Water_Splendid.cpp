/*
 	TASK : Water Splendid
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
int a[6],b,c,k[100];
int ans[200][200];
int cnt[200],all=0;
void play(int sum,int now){
	if(now == c && sum!=b)  return; 
	if(sum > b) return;
	if(sum == b){
		cnt[all] = now;
		for(int i=0; i<now; i++) ans[all][i] = k[i];
		all++;
		return ;
	}
	for(int i=0; i<6; i++){
		k[now]=a[i],play(sum+a[i],now+1);
	}
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	cin >> b >> c;
	for(int i=0; i<6; i++) cin >> a[i];
	play(0,0);
	cout << all << "\nE\n";
	for(int i=0; i<all; i++){
		cout << cnt[i] << " ";
		for(int j=0; j<cnt[i]; j++) cout << ans[i][j] << " ";
		cout << "\nE\n";
	}
	return 0;
}
