/*
    TASK: Skocimis
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
	int a,b,c,mx;
	cin >> a >> b >> c;
	mx = max(b-a-1,c-b-1);
	cout << mx;
    return 0;
}
