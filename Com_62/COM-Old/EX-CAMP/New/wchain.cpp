#include<bits/stdc++.h>
using namespace std;
char a[1100],b[1100];
int main()
{
    int len,q,cnt;
    scanf("%d %d %s",&len,&q,a);
    int i,j;
    for(i=0;i<q-1;i++)
    {
        scanf(" %s",b);
        for(j=0,cnt=0;j<len;j++)
            if(a[j]!=b[j])
                cnt++;
        if(cnt>2) break;
        strcpy(a,b);
    }
    printf("%s",a);
    return 0;
}
