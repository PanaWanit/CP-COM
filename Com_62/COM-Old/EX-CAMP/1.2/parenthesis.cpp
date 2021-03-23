#include<bits/stdc++.h>
using namespace std;
stack<int> st;
char a[300];
int main(){
    int q,ch=0,len,i;
    scanf("%d",&q);
    while(q--){
        while(!st.empty())
            st.pop();
        scanf(" %s",a);
        len=strlen(a);
        for(i=0;i<len;i++){
            if(a[i]=='(')
                st.push(1);
            else if(a[i]=='[')
                st.push(2);
            else if(a[i]==')'){
                if(st.empty()||st.top()!=1){ch=1;break;}
                st.pop();
            }
            else if(a[i]==']'){
                if(st.empty()||st.top()!=2) {ch=1;break;}
                st.pop();
            }

        }
        if(!st.empty()) ch=1;
        if(ch) printf("No\n"),ch=0;
        else printf("Yes\n");
    }

}
/*
5
([(])
(])
*/
