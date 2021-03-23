#include<stdio.h>
#include<string.h>
char a[1000];
char *ptr;
int main()
{
    int len,q,ch,ch2,i;
    gets(a);
    sscanf(a,"%d",&q);
    while(q--){
        gets(a);
        if(a[strlen(a)-1]=='\r')
            a[strlen(a)-1]='\0';
        len=strlen(a);
        ptr = strtok(a," ");
        ch=1;
        while(ptr!=NULL){
                len = strlen(ptr);
        if(len%4==0){
            for(i=0,ch2=1;i<len;i+=4){
                if(strncmp(&ptr[i],"meow",4)){
                    ch2=0; break ;
                }

            }
            if(ch2){
            printf("YES\n"); ch=0; break;
        }

        }


            ptr = strtok(NULL," ");
        }
        if(ch)
            printf("NO\n");

    }

    return 0;
}
/*
3
iku iku iku iku iku meow meow
meowwwwwwwwwwwwwwwwwwwwwwwwwwwww itte itte itte
mameow meow shinu shinu shinu
*/
