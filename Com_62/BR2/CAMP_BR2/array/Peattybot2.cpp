#include<bits/stdc++.h>
using namespace std;
char a[1010];
char rot(int k)
{
    if(k=='N') return 'E';
    if(k=='E') return 'S';
    if(k=='S') return 'W';
    if(k=='W') return 'N';
}

int main()
{
    int i;
    scanf(" %s",&a);
    int len=strlen(a);
    int tid='N';
    for(i=0;i<len;i++)
    {
        if(a[i]=='N')
        {
            while(tid!='N')
                printf("R"),tid=rot(tid);
         printf("F");
        }
        else if(a[i]=='E')
        {
            while(tid!='E')
                printf("R"),tid=rot(tid);
         printf("F");
        }
        else if(a[i]=='S')
        {
            while(tid!='S')
                printf("R"),tid=rot(tid);
         printf("F");
        }
        else if(a[i]=='W')
        {
            while(tid!='W')
                printf("R"),tid=rot(tid);
         printf("F");
        }
        else if(a[i]=='Z')
            printf("Z"),tid='N';
        }

        return 0;
    }



