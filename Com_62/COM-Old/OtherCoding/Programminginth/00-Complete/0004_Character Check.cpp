/*
    TASK: Character Check
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
char a[10500];
int main(){
    int i,j;
    scanf(" %s",a);
    int upper = 0 ,lower = 0;
    for(i=0;i<strlen(a);i++){
        if(isupper(a[i])) upper=1;
        if(islower(a[i])) lower=1;
    }
    if(upper && lower)  printf("Mix");
    else if(upper)      printf("All Capital Letter");
    else                printf("All Small Letter");
    return 0;
}
