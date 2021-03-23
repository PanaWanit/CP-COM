/*
    TASK: AP_Magic Hat
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int w,v,d,x,type,dm;
    bool operator <(const A&o) const{
        return w>o.w;
    }
};
struct T{
    int w,v,d,x,type,dm;
    bool operator <(const T&p) const{
      return dm>p.dm;
    }
};
int mark[200200];
priority_queue<A> he;
priority_queue<T> tmm;
int main(){
    int n,m,i,w,v,d,x,opr,k,ch;
    scanf("%d %d",&n,&m);
    n+=m;
    for(i=0;i<n;i++){
        scanf("%d",&opr);
        if(opr==1){
            scanf("%d",&opr);
            if(opr==1){
                scanf("%d %d",&w,&v);
                he.push({w,v,-1,-1,1,i});
            }
            if(opr==2){
                scanf("%d %d %d",&w,&v,&d);
                if(i<d){
                he.push({w,v,d,-1,2,i});
                }

            }
            if(opr==3){
                scanf("%d %d %d %d",&w,&v,&d,&x);
                if(i>=d){
                    he.push({x,v,d,x,1,i});
                }
                else{
                he.push({w,v,d,x,3,i});
                tmm.push({w,v,d,x,3,i});
                }

            }
            //printf("\t t=%d\n",i);
        }
        else{
            while(!tmm.empty()&&i>=tmm.top().dm&&tmm.top().type==3){
                T z=tmm.top();
                tmm.pop();
                he.push({z.x,z.v,0,z.x,1,z.dm});
                mark[z.dm]=1;
            }
            ch=0;
            k=0;
            while(!ch){
               // if(!he.empty())printf("[%d %d %d{%d}]\n",he.top().w,he.top().v,he.top().type,i);
                if(he.empty()) k=0,ch=1;
                else if(he.top().type==2){
                    else if(i==he.top().d) k=0,ch=1;
                    else if(i>he.top().d) ch=0;
                    else k=he.top().v,ch=1;
                    he.pop();
                }
                else if(he.top().type==1){
                    k=he.top().v;
                    ch=1;
                    he.pop();
                }
                else if(he.top().type==3 && mark[he.top().dm]) he.pop();
                else if(he.top().type==3&&!mark[he.top().dm]) k=he.top().v,ch=1,he.pop();

            }
            printf("%d\n",k);
        }

    }
    return 0;
}
/*
5 4
1 1 10 20
1 2 30 10 3
2
2
1 3 40 20 7 5
1 1 30 30
1 2 31 50 7
2
2

BUG
5 4
1 3 50 30 3 5
1 3 70 40 2 4
2
2

5 4
1 1 20 30
1 2 5 20 3
1 3 70 40 3 4


*/
