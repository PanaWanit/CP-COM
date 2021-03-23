#include<bits/stdc++.h>
using namespace std;
struct A{
    char b[35];
    bool operator<(const A&o)const{
        if(strcmp(b,o.b)>0) return true;
        return false;
    }

};

A a[1010];
int main()
{
    int q;
    scanf("%d",&q);
    for(int i=0;i<q;i++)
        scanf("%s",&a[i].b);
    sort(a,a+q);
    for(int i=q-1;i>=0;i--){
        printf("%s\n",a[i].b);

        }

    return 0;
}
