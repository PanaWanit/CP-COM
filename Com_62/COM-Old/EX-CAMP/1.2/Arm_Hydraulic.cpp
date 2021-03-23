#include<bits/stdc++.h>
using namespace std;
int a[10100];
stack<int> st;
int main()
{
    int q,n,k=1,e,ch=0;
    scanf("%d",&q);
    while(q--)
    {
        k=1;
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d",&e);
            while(!st.empty() && st.top()==k)
            {
                st.pop();
                k++;
            }
            if(e!=k)
                st.push(e);
            else
                k++;
        }



        while(!st.empty() && st.top()==k)
        {
            st.pop();
            k++;
        }
        if(st.empty())
            printf("yes\n");
        else
            printf("no\n");
        while(!st.empty())
            st.pop();
    }
    return 0;
}
