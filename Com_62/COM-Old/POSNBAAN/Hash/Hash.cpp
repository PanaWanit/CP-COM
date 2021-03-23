/*
    TASK: Hash
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
#define hs 500009
int ht[hs],mp[hs];
int a[100100];
int main(){
    int n,q,i,num;
    scanf("%d %d\n",&n,&q);
    for(i=1;i<=n;i++){
      scanf("%d\n",&a[i]);
      int key=a[i]%hs;
      while(ht[key]){
          key++;
          key%=hs;
      }
      ht[key]=a[i];
      mp[key]=i;
    }
    while(q--){
        scanf("%d",&num);
        int key=num%hs;
        while(ht[key]!=num){
            key++;
            key%=hs;
        }
        printf("%d\n",mp[key]);
    }
    return 0;
}
/*
5 5
10000000 19 500020 11 7
19
7
11
10000000
500020
*/
