#include<bits/stdc++.h>
using namespace std;
stack<int> st;
int main(){
    int cnt=0,n,a,h,ch=0;
    scanf("%d %d",&n,&a);
    n+=a;
    char opr;
    while(n--){
        scanf(" %c",&opr);
        if(opr=='A'){
            cnt++;
            scanf("%d",&h);
            while(1){
                if(st.empty()) break;
                if(h<st.top()) break;
                st.pop();
                cnt--;
            }
            st.push(h);
        }
        else{
            printf("%d\n",cnt);
        }
    }
    return 0;
}
