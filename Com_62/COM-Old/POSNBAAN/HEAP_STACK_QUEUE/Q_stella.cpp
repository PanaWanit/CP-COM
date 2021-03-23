/*
    TASK: Q _ Stella
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
  long long mn,day,hl;
  bool operator <(const A&o) const{
      if(mn!=o.mn) return mn<o.mn;
      return day>o.day;
  }
};
priority_queue<A> he;
int main(){
    long long day,cnt=0,mp=0,i,num,hl,mn,d,h,div;
    char opr,stone;
    scanf("%lld",&day);

    for(i=1;i<=day;i++){
      scanf(" %c",&opr);
      if(opr=='c'){
        scanf(" %c",&stone);
        if(stone=='n'){
          scanf("%lld",&num);
          he.push({num,i,200000});
        }
        else{
          scanf("%lld %lld",&num,&hl);
          he.push({num,i,hl});
        }
      }
      else{
        while(!he.empty()){
          mn=he.top().mn,d=he.top().day,h=he.top().hl;
          he.pop();
          if(i-d>=h){
            mn/=(2*((i-d)/h));
            if(!he.empty()&&mn>=he.top().mn) break;
            else he.push({mn,i,hl});
          }
          break;
        }
        mp+=mn;
      }

    }
    while(!he.empty()){
      mn=he.top().mn,d=he.top().day,h=he.top().hl;
      he.pop();
      if(mn==0) continue;
      if(i-d>=h){
        if((i-d)/h==0) div=1;
        else div=(i-d)/h;
        if(mn/(2*div)==0) continue;
      }
      cnt++;
    }
    printf("%lld\n%lld",mp,cnt);
    return 0;
}
/*
5
c n 100
c r 58 2
u
u
c r 1 1
*/
