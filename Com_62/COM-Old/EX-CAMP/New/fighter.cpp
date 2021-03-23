#include<bits/stdc++.h>
using namespace std;
int comboatE=0,comboatO=0;
int main()
{
    int p;
    scanf("%d",&p);
    int q=2*p;
    int Odd=p,Even=p,cmd;
    while(q--)
    {
        //printf("E[%d]O[%d]\n",Even,Odd);
        if(Odd<=0)
        {
            printf("0\n%d",cmd);
            break;
        }
        else if(Even<=0)
        {
            printf("1\n%d",cmd);
            break;
        }

        scanf("%d",&cmd);
        if(cmd%2==0)
        {
            comboatO=0;
            if(comboatE>=2)
            {
                Odd-=3;
            }
            else
            {
                Odd--;
            }
            comboatE++;
        }
        else if(cmd%2==1)
        {
            comboatE=0;
            if(comboatO>=2)
            {
                Even-=3;
            }
            else
            {
                Even--;
            }
            comboatO++;
        }
    }

    return 0;
}
