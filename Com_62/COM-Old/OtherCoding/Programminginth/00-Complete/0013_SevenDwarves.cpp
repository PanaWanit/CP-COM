/*
    TASK: Seven Dwarf
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[11];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
	int i,j,sum=0,one,two;
	for(i=0;i<9;i++)
		cin >> a[i],sum+=a[i];
	sum-=100;
	for(i=0;i<9-1;i++){
		for(j=i+1;j<9;j++){
			if(a[i]+a[j]==sum)
				one = i, two =j;
		}
	}
	for(i=0;i<9;i++){
		if(i!=one && i!=two) printf("%d\n",a[i]);
	}
	
    return 0;
}
