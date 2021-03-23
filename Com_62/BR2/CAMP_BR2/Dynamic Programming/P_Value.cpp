#include<bits/stdc++.h>
using namespace std;
int m[212];
int main()
{
    int p,i,j;
    scanf("%d",&p);
    if(p==0)
    {printf("10");return 0;}
    if(p==1)
    {printf("1");return 0;}
    for(i=9;i>1;i--){
        while(p%i==0){
            m[i]++;
            p/=i;
        }

    }

    if(p!=1) printf("-1");
    else
    {
        for(i=2;i<=9;i++){
            for(j=0;j<m[i];j++)
            {
                printf("%d",i);
            }
        }
    }

    return 0;
}
