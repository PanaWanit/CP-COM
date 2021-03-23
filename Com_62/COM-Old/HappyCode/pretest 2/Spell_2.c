#include<stdio.h>

int a[10];
int gcd(int a,int b)
{
    if (a%b==0)
        return b;
    return gcd(b,a%b);
}


int main()
{
  int  a,b,n,s,ans;
    scanf("%d %d %d",&a,&b,&s);
    if(s%(gcd(a,b))==0)
        printf("Yes\n");
    else printf("No\n");


return 0;

}
