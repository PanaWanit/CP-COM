#include<bits/stdc++.h>
using namespace std;
int b_pos=1;
char a[300],c;
int main()
{
    scanf(" %s",a);
    int len=strlen(a);
    int i;

    for(i=0;i<len;i++)
    {
        /// A MET

        if(b_pos==1&&a[i]=='A')
            b_pos=2;
        else if(b_pos==2&&a[i]=='A')
            b_pos=1;
        /// C MET
        else if(b_pos==1&&a[i]=='C')
                b_pos=3;
        else if(b_pos==3&&a[i]=='C')
                b_pos=1;
        /// B MET
        else if(b_pos==2&&a[i]=='B')
                b_pos=3;
        else if(b_pos==3&&a[i]=='B')
                b_pos=2;
    }
    printf("%d",b_pos);
    return 0;
}
