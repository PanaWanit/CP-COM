/*
    TASK: Hurricane
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
stack<pair<int,int>> st;
int main(){
    int n,i,a;
    long long ans=0;
    pair<int,int> tmp;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        while(!st.empty() && st.top().first<a){
            ans+=st.top().second;
            st.pop();
        }
        if(!st.empty() && st.top().first == a){
            ans+=st.top().second;
            tmp = st.top();
            tmp.second++;
            st.pop();
        }
        else{
            tmp = {a,1};
        }
        if(!st.empty()) ans++;
        st.push(tmp);
    }
    printf("%lld\n",ans);

    return 0;
}
