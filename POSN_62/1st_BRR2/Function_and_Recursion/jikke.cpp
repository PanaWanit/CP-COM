/*
 	TASK : Jikke
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
int A,B,C;
bool ans[30] , mark[30][30][30];
void play(int a,int b, int c){
	if(a > A || b > B || c > C || a < 0 || b < 0 || c < 0) return;
	if(mark[a][b][c]) return;
	if(a == 0) ans[c] = 1;
	mark[a][b][c] = 1;
	// A -> B,C
	play(a-(B-b),B,c) , play(0,b+a,c);
	play(a-(C-c),b,C) , play(0,b,c+a);
	// B -> A,C
	play(A,b-(A-a),c) , play(a+b,0,c);
	play(a,b-(C-c),C) , play(a,0,b+c);
	//C -> A,B
	play(A,b,c-(A-a)) , play(a+c,b,0);
	play(a,B,c-(B-b)) , play(a,b+c,0);
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	cin >> A >> B >> C;
	play(0,0,C);
	for(int i=0; i<=C; i++){
		if(ans[i]) cout << i << " ";
	}
	cout << "\n";
	return 0;
}
