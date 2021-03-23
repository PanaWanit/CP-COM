/*
    TASK: Seven Dwarves
    AUTHOR: YooInw2
    LANG: CPP
    SCHOOL: Yoo Noober channel School at Home
*/
#include<bits/stdc++.h>
using namespace std;
int a[10];
int main(){
    int i,j,x,y,sum=0,e,n;
    for(i=0;i<9;i++){
        cin >> a[i];
        sum +=a[i];
    }
    sum-=100;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            if(a[i]+a[j]==sum) e=i,n=j;
        }
    }
    for(i=0;i<9;i++){
        if(i!= e && i!=n) cout << a[i] << endl;
    }
    return 0;
}
