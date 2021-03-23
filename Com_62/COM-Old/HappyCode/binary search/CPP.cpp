#include<bits/stdc++.h>
using namespace std;
struct A{
    int no,sc;
    bool operator <(const A&o) const{
        if(no!=o.no) return no<o.no;
        return sc<o.sc;
    }
};
A a[1010];
stack<int> st;
queue<int> qu;
//string a,b;
int main(){

    int i;
    for(i=0;i<3;i++)
        scanf("%d %d",&a[i].no,&a[i].sc);
    sort(a,a+3);
     for(i=0;i<3;i++)
        printf("%d %d\n",a[i].no,a[i].sc);
    /*
    cin>>a;
    cin>>b;
    if(a==b) printf("ok");
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    st.push(x);
    st.push(y);
    st.push(z);

    qu.push(x);
    qu.push(y);
    qu.push(z);

    st.pop();
    qu.pop();

    while(!st.empty()){
        printf("%d ",st.top());
        st.pop();
    }
    printf("\n");
    while(!qu.empty()){
        printf("%d ",qu.front());
        qu.pop();
    }
    */
    return 0;
}
