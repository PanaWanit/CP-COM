#include<stdio.h>
#include<math.h>
int main()
{
    int num,j,i,ch=0;
    scanf("%d",&num);
    for(i=2;i<=sqrt(num);i++)
        {
            if(num%i==0)
                {
                ch=1;
                break;
                }
        }
    if(num==1||ch)
        printf("No");
    else printf("Yes");




    return 0;
}
