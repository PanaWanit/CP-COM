/*
    TASK: FC_Cooking
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[11],b[11];
int main(){
    int n,m,i,j,ans=1<<30;
    int A,B;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d %d",&a[i],&b[i]);

    for(i=1;i<(1<<n);i++){
      A=1,B=0;
      for(j=0;j<n;j++){
        if(i&(1<<j)){
          A*=a[j],B+=b[j];
        }
      }

      ans=min(ans,abs(A-B));
    }
    printf("%d",ans);
}
/*
4
1 7
2 6
3 8
4 9
*/
