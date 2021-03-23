/*
    TASK: Trik
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
    int p=1;
	string a;
	cin >> a;
	for(int i=0;i<a.size();i++){
		if(a[i]=='A' && p==1) p=2;
		else if(a[i]=='A' && p==2) p=1;
		else if(a[i]=='B' && p==2) p=3;
		else if(a[i]=='B' && p==3) p=2;
		else if(a[i] == 'C' && p==1) p=3;
		else if(a[i]=='C' && p==3) p=1; 
	}
	cout << p;
    return 0;
}
