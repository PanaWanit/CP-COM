/*
    TASK: A - Welcome to 2017
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<stdio.h>
#include<stdlib.h>
int mark[4040],a[2020],n[2020];
int main(){
    int mn = 3000,q,ans,x,i;
    scanf("%d",&q);
    for(i=0;i<q;i++){
      scanf("%d",&n[i]);
      x = n[i];
      mark[x]++;
      a[i] = 2017-x;
    }
    for(i=0;i<q;i++){
      if(mark[n[i]]>1) continue;
      if(abs(a[i]) < mn){
          ans = n[i];
          mn = abs(a[i]);
      }
      else if(abs(a[i]) == mn && a[i] > 0){
        ans = n[i];
      }
    }
    if(mn==3000) printf("-1");
    else printf("%d",ans);


    return 0;
}
