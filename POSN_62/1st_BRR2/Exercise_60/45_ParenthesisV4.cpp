/*
 	TASK : Parenthesis V4
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
int n, b[22],cnt=0;
string ans[100000];
void play(int state=0, int open=0, int close=0) {
	if(close > open || open > n || close>n) return;
	if(state==2*n) {
		for(int i=0; i<2*n; i++)
			ans[cnt] += (b[i]==0?"(":")");
		cnt++;
		return;
	}
	b[state]=0;
	play(state+1, open+1, close);
	b[state] = 1;
	play(state+1, open, close+1);
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	cin >> n;
	play();
	cout << cnt << "\n";
	for(int i=0; i<cnt; i++) 
		cout << ans[i] << "\n";
	return 0;
}
