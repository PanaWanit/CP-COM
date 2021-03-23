#include<bits/stdc++.h>
using namespace std;
stack<char> st;
char a[101000];
int main(){
    int q,cnt=0;
    char c;
    scanf("%d",&q);
    while(q--){
        scanf(" %c",&c);
        if(!st.empty()){

             if(st.top()==c)
                st.pop();
            else
                st.push(c);
        }

        else
            st.push(c);
    }
    while(!st.empty()){
        a[cnt++]=st.top();
        st.pop();

    }
    if(cnt==0){
        printf("0\nempty");
        return 0;
    }
    printf("%d\n%s",cnt,a);
    return 0;
}
