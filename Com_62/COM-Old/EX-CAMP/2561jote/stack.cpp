#include<bits/stdc++.h>
using namespace std;
stack<int> st;
int ch=0;
char a[300];
int main(){
    int q,l;
    scanf("%d",&q);
    while(q--){

        while(!st.empty())
            st.pop();

        scanf(" %s",a);
        l = strlen(a);
        for(int i=0;i<l;i++){
            if(a[i]=='(') st.push({1});
            else {
                if(!st.empty())st.pop();
                else {ch=1;break;}
            }

        }
        if(!st.empty()||ch==1) printf("N\n"),ch=0;
        else printf("Y\n");
    }
    return 0;
}
/*
4
(())()
()(()
))((
((()()))
*/
