/*
    TASK: Peatt Punch
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;
stack<PII> st;
int a[100100];
int main()
{
    int l,q,pow,i,h;
    scanf("%d %d",&l,&q);
    for(i=0;i<l;i++){
        scanf("%d",&h);
        while(!st.empty()&& h<st.top().first) st.pop();
        if(st.empty()) pow=0;
        else pow= max(st.top().second,h-st.top().first);
        a[i]=pow;
        st.push(make_pair(h,pow));
        printf("[%d %d]\n",st.top().first,st.top().second);
    }
    sort(a,a+l);
    while(q--){
        scanf("%d",&h);
        printf("%d\n",l - (upper_bound(a,a+l,h)-a));
    }

    return 0;
}
