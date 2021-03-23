/*
    TASK: Plate Sort
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
int a[300300];
using namespace std;
int main(){
    int q,ser;
    scanf("%d",&q);
    while(q--){
        int n,i;
        scanf("%d",&n);
        for(i=1;i<=n;i++) scanf("%d",&a[i]);
        for(i=n,ser=n;i>=1;i--){
            if(a[i]==ser) ser--;
        }
            printf("%d\n",ser);
    }
    return 0;
}
/*
2
3 3 2 1
4 1 3 4 2
*/
