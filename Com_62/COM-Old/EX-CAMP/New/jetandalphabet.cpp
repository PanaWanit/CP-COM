#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,j;
    int A=0;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%c",(A+j)%26+65);
        }
        A=(A+j)%26;
        printf("\n");
    }




    return 0;
}
