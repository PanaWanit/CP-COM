/*
    TASK: modulo
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int mark[42];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
	int i,n,cnt=0,x;
	for(i=0;i<10;i++){
		cin >> x;
		if(!mark[x%42]) cnt++;
		mark[x%42]=1;
	} 
	cout << cnt;
    return 0;
}
