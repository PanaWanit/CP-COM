#include<bits/stdc++.h>
using namespace std;
string a[100000];
char s[100];
int main()
{
    int n,m,k,i;
    scanf("%d %d %d",&n,&m,&k);
    for(i=0;i<n;i++){
    scanf(" %s",s);
    a[i]=s;
    }

    sort(a,a+n);
    while(m--)
    {
        scanf(" %s",s);
        i=lower_bound(a,a+n,s)-a;
        if(a[i]==s) printf("Accepted\n");
        else        printf("Rejected\n");
    }
    return 0;
}
