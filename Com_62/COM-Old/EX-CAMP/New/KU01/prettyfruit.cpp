#include<bits/stdc++.h>
using namespace std;

int main()
{
    double l,w;
    int ans=0,q;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%lf %lf",&l,&w);
        double gen=l*3/4;
        if(w<=gen) ans+=5;
        else ans+=3;
        //printf("[%d]\n",ans);
    }
        printf("%d",ans);

    return 0;
}
