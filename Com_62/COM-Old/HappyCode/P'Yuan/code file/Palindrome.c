#include<stdio.h>
#include<string.h>
char a[50001],b[50001];
int main()
{
    int sum,len,hl,n,j,c=0,len2,ch,ch2,hl2;
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        ch=1;
        len2=0;
        scanf("%s",a+1);
        len=strlen(a+1);
        for(j=1;j<=len;j++){
            if(isalpha(a[j])){
                a[j]=tolower(a[j]);
            }
        }
        for(j=1; j<=len; j++)
        {
            if(isalnum(a[j]))
            {
                b[++len2]=a[j];
            }
        }
        hl=len2/2;
        for(j=1;j<=hl;j++){
            if(b[j]!=b[len2-j+1])
                ch=0;
        }
        if(ch){
            ch2=1;
            hl2=hl/2;
            for(j=1;j<=hl2;j++){
                if(b[j]!=b[hl-j+1])
                    ch2=0;
            }
            if(ch2) printf("Double Palindrome\n");
            else    printf("Palindrome\n");
        }
        else{
            printf("No\n");
        }
    }

    return 0;
}
// AABAA ABBA
/*
3
A72bB27A
aB3Ba5ab3BA
aB4
*/
