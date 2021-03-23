/*
    TASK: Toppy Kung
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
map<string,int> mark;
string a[1010];
int main(){
    int n;
    cin >> n;
    int i;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++){
        if(!mark[a[i]]){
            cout << a[i] << endl;
            mark[a[i]]=1;
        }

    }



    return 0;
}
