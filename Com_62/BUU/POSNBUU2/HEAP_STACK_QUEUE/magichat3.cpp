#include<bits/stdc++.h>
using namespace std;
int mark[700200];
struct A{
    int w,v,d,x,t,name;
    bool operator <(const A&o) const{
        return w>o.w;
    }
};
struct T{
    int i,d,t,x,v,name;
    bool operator <(const T&p) const{
        return d>p.d;
    }
};
priority_queue<A> heap;
priority_queue<T> timeofheap;

int main(){
    int n,m,opr,k,name=200100,in;
    A tmp;
    int w,v,d,x;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n+m;i++){
        scanf("%d",&opr);
        if(opr==1){
            scanf("%d",&opr);
            // w v d x t name
            // i d t x v name
            if(opr==1){
                scanf("%d %d",&w,&v);
                heap.push({w,v,500000,0,opr,name+i});
            }
            if(opr==2){
                scanf("%d %d %d",&w,&v,&d);
                if(i<d){
                    heap.push({w,v,d,0,opr,name+i});
                    timeofheap.push({i,d,opr,0,0,name+i});
                }
            }
            if(opr==3){
                scanf("%d %d %d %d",&w,&v,&d,&x);
                if(i>=d) heap.push({x,v,d,0,1});
                else {
                    heap.push({w,v,d,x,opr,name+i});
                    timeofheap.push({i,d,opr,x,v,name+i});
                }
            }
        }
        else{

            in=0;
            while(!timeofheap.empty()&&timeofheap.top().d<=i){
                if(!mark[timeofheap.top().name]){
                mark[timeofheap.top().name]=1;
                if(timeofheap.top().t==3)
                heap.push({timeofheap.top().x,timeofheap.top().v,0,0,1,0});
                }
                timeofheap.pop();

            }
            int ch=0;
            k=1;
            while(!ch){
                if(heap.empty()) k=0,ch=1;
                else if(heap.top().t==2&&mark[heap.top().name]&&i>=heap.top().d) heap.pop();
               // else if(heap.top().t==2&&mark[heap.top().name]&&i==heap.top().d) k=0,heap.pop(),ch=1;
                else if(heap.top().t==2&&!mark[heap.top().name]) k=heap.top().v,ch=1,mark[heap.top().name]=1,heap.pop();
                else if(heap.top().t==3&&mark[heap.top().name]) heap.pop();
                else if(heap.top().t==3&&!mark[heap.top().name]) k=heap.top().v,mark[heap.top().name]=1,ch=1,heap.pop();
                else if(heap.top().t==1) k=heap.top().v,heap.pop(),ch=1;
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
1 2 25 50 7
2
2

5 4
1 3 500 70 5 3
1 2 4 3 3
2
1 3 499 80 6 4
2
2
2
*/
