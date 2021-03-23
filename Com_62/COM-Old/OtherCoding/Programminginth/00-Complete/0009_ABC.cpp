/*
    TASK: ABC
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[3];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
	string s;
	cin >> a[0] >> a[1] >> a[2];
	sort(a,a+3);
	cin >> s;
	for(i=0;i<3;i++){
		if(s[i]=='A') cout << a[0] << " ";
		else if(s[i]=='B') cout << a[1] << " ";
		else if(s[i]=='C') cout << a[2] << " ";
	}
	
    return 0;
}
