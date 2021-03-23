#include<bits/stdc++.h>
using namespace std;
int a[100100];
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);

    int sum=0,mx=-2e9,mxst,mxed,st=1;
    for(i=1;i<=n;i++)
    {
        sum+=a[i];
        if(sum>mx)
        {
        mx=sum;
        mxst = st;
        mxed = i;
        }
        if(sum<0){
            sum = 0;
            st=i+1;
        }
    }
    printf("%d %d\n",mxst,mxed);
    printf("%d\n",mx);
    return 0;
}
/*5 4 -6 3 -2 6*/
