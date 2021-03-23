/*
    TASK: Okiviri
    AUTHOR: YooInw2
    LANG: CPP
    SCHOOL: Yoo Noober channel School at Home
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    int i,j;
    int len = a.size();
    cout << ".";
    for(i=0;i<len;i++){
        if(i%3 == 2) cout << ".*..";
        else cout << ".#..";
    }
    cout <<endl << ".";
    for(i=0;i<len;i++){
        if(i%3==2) cout << "*.*.";
        else cout << "#.#.";
    }
    cout << endl << "#";
    for(i=0;i<len;i++){
        if(i%3==0) cout << "." << a[i] << ".#";
        else if(i%3==1 && i==len-1) cout <<"." << a[i] << ".#";
        else cout << "."<< a[i] << ".*" ;
    }
    cout <<endl << ".";
    for(i=0;i<len;i++){
        if(i%3==2) cout << "*.*.";
        else cout << "#.#.";
    }
    cout << endl << ".";
    for(i=0;i<len;i++){
        if(i%3 == 2) cout << ".*..";
        else cout << ".#..";
    }

    return 0;
}
/*
..#...#...*...#..
.#.#.#.#.*.*.#.#.
#.A.#.B.*.C.*.D.#
.#.#.#.#.*.*.#.#.
..#...#...*...#..
*/
