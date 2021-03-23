#include<bits/stdc++.h>
using namespace std;
struct A{
   int w,s;
};
stack<A> st;
int main(){
    int q,s,w;
    scanf("%d",&q);
    while(q--){

        scanf("%d %d",&w,&s);

        while(1){
            if(st.empty()) break;
            if(w<=st.top().w) break;
            printf("%d\n",st.top().s);
            st.pop();
        }
            st.push({w,s});



    }
}
