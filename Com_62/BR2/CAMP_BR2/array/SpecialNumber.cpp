#include<bits/stdc++.h>
using namespace std;
char a[10010];
int main()
{
    int l=5,i,len,c,k;
    while(l--){
            c=0,k=0;
    scanf(" %s",a);
    len = strlen(a);
    for(i=0;i<len;i++)
        c+=pow(a[i]-'0',i+1);
        k=atoi(a);
    if(k==c)printf("Y\n");
    else printf("N\n");
}
}
