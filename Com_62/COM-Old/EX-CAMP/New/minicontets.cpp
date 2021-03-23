#include<bits/stdc++.h>
using namespace std;
char a[300303];
int main()
{
    int n,i;
    scanf("%d",&n);
    scanf(" %s",a);
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            printf("Wrong Answer");
            return 0;
        }
    }
    printf("Accepted");
    return 0;
}
