#include<bits/stdc++.h>
using namespace std;
stack<int> st;
char a[1000];
int cst[1000];
int main(){
    int q,len,i,j,ans,n,num,cter=0;
    scanf("%d",&q);
    while(q--){
        ans=0;
        scanf(" %s",&a);
        len=strlen(a);
        for(i=0;i<len;i++){
            if(a[i]=='(')
                st.push(-1);
            else if(isdigit(a[i])){
                n=a[i]-'0';
                num=st.top();
                st.pop();
                st.push(n*num);
            }

            else if(a[i]==')'){
                if(isdigit(a[i+1]))
                n=a[i+1]-'0',a[i+1]='k';
                else n=1;
                while(st.top()!=-1){
                    num=st.top();
                    st.pop();
                    cst[cter++]=n*num;
                }
                st.pop();
                for(j=cter-1;j>=0;j--)
                    st.push(cst[j]);
                memset(cst,0,sizeof cst);
                cter=0;

            }
            else if(isalpha(a[i])){
                if(a[i]=='C') st.push(12);
                else if(a[i]=='O') st.push(16);
                else if(a[i]=='H') st.push(1);
            }

        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        printf("%d\n",ans);

    }


    return 0;
}
/*
4
C(H2)2(O2)2
COOH
(C(H2O)2)3
CH(O(H(O2)2C2))3

12+4+64
*/
