#include<bits/stdc++.h>
using namespace std;
int n,m;
int state[200],n_ans;
char word[20];
char ans[60000][10];
void gen_word(int idx){
    if(idx==n)
    {
        strcpy(ans[n_ans],word);
        n_ans++;

        return ;
    }
    for(int i='A';i<='Z';i++)
    if(state[i]>0){
        word[idx]=i;
        state[i]--;
        gen_word(idx+1);
        state[i]++;
    }
}
int main()
{
    int i;
    char alphabet;
    int n_alphabet;

    scanf("%d %d",&n,&m);

    for(i=0;i<m; i++){
        scanf(" %c %d",&alphabet,&n_alphabet);
        state[alphabet] = n_alphabet;
    }
    for(i='A'; i<='Z';i++)
    {
        if(state[i] > 0){
            word[0] = i;
            state[i]--;
            gen_word(1);
            state[i]++;
        }


    }
    printf("%d\n",n_ans);
    for(i=0;i<n_ans;i++)
        printf("%s\n",ans[i]);
    return 0;
}
/*
4 3
S 1
O 2
L 1
*/
