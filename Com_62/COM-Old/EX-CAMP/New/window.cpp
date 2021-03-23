#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i,j;
    n*=2;
    n++;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        if (i==n-1||i==0||j==0||j==n-1) cout<<"*";
        else if(i%2==0&&i>j-1) cout<<"*";
        else if(j%2==0&&j>i-1) cout<<"*";
        else cout<<"-";
        }
        cout<<endl;
    }
    return 0;
}
