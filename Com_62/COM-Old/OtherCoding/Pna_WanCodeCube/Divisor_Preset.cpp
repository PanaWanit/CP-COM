/*
    TASK: Divisor Preset
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
using namespace std;
int a[20000];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i,n,j,p,z=0;
    cin >> n;
    for(i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout << i << " ";
            if(n/i != i)
                a[z++] = n/i;
        }
    }
    for(i=z-1;i>=0;i--){
        cout << a[i] << " ";
    }
	return 0;
}
