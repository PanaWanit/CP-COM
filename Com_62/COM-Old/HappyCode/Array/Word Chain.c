#include<stdio.h>
#include<string.h>
char a[1100],b[1100];
int main()
{
    int l,n,i,cnt,j;
    scanf("%d %d %s",&l,&n,a);
    for(i=0;i<n-1;i++)
    {
        scanf(" %s",b);
        for(j=0,cnt=0;j<l;j++)
            if(a[j]!=b[j])
            cnt++;
        if(cnt>2)
            break;
        strcpy(a,b);
    }
    printf("%s\n",a);
    return 0;
}
/*
4 12 HEAD HEAP LEAP TEAR REAR BAER BBAET BEEP JEEP JOIP JEIP AEIO
*/
