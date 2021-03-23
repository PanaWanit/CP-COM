/*
    TASK: Pet Bad
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
long long a[500500];
using namespace std;
int main(){
  int n,b,i,j,l=0,r=5e6,mi,sum;
  scanf("%d %d",&n,&b);
  for(i=0;i<n;i++)
      scanf("%d",&a[i]);
  while(l<r)
  {
      mi=(l+r)/2;
      for(i=0,sum=0;i<n;i++){
          if(a[i]%mi==0)
              sum+=a[i]/mi;
          else
              sum+=a[i]/mi+1;
      }
      if(sum>b)
          l=mi+1;
      else
          r=mi;
  }
  printf("%d",l);
  return 0;
}
/*
2 7
200
501

4 6
12
268
340
20
*/
