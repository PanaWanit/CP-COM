#include<bits/stdc++.h>
using namespace std;
char a[5000];
int main(){
    int q,i;
    scanf("%d",&q);
    while(q--){
        scanf("%s",a+1);
        int len=strlen(a+1);

        if(len%3==0){
            for(i=1;i<=len;i++){
                if(i%3==1&&i!=1){
                    printf(",%c",a[i]);
                }
                else printf("%c",a[i]);
            }
        }
        else if(len%3==2){
            for(i=1;i<=len;i++){
                if(i%3==2&&i!=len) printf("%c,",a[i]);
                else       printf("%c",a[i]);
            }
        }
        else if(len%3==1){
            for(i=1;i<=len;i++){
                if(i%3==1&&i!=len) printf("%c,",a[i]);
                else       printf("%c",a[i]);
            }
        }
        printf("\n");
    }


    return 0;
}
