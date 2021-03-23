#include <bits/stdc++.h>
using namespace std;
int k, a[150];
void gai(int w, int l, int state)
{
    if (w == k || l == k)
    {
        for (int i = 0; i < state; i++)
        {
            if (a[i])
                printf("W");
            else if (!a[i])
                printf("L");
        }
        printf("\n");
        return;
    }
    a[state] = 1;
    gai(w + 1, l, state + 1);
    a[state] = 0;
    gai(w, l + 1, state + 1);
}
int main()
{
    int w, l;
    scanf("%d %d %d", &k, &w, &l);
    gai(w, l, 0);

    return 0;
}
