/*
	Task: Disjoint Set Union (DSU)
	Author: Pana Wanit
	Lang: C++17
	School: N/a
*/
#include<bits/stdc++.h>
using namespace std;
const int mxN = 1000;
int p[mxN]; // parent
int find_root(int i){
	if(p[i] == i) return i;
	return p[i] = find_root(p[i]); // compress path
	/*	checking + compress path
	 *	Ex. Graph
	 *	    0
	 *	    |
	 *	    1
	 *     / \
	 *    2   3
	 *    p[0] = 0 , p[1] = 0 , p[2] = 1 , p[3] = 1
	 *    call function find_root(2):
	 *    -> p[2] != 2
	 *    -> p[2] = find_root(p[2](1))
	 *
	 *    -> find_root(1)
	 *    -> p[1] != 1
	 *    -> p[1] = find_root(p[1](0))
	 *
	 *    ->find_root(0)
	 *    -> p[0] == 0
	 *    -> return 0
	 *
	 *    ->p[1] = 0; ( return 0 to find_root(p[2])
	 *    ->p[2] = 0;
	 *	  
	 *	  Graph after find_root(2) :
	 *	     0
	 *	    / \
	 *	   1   2
	 *	  /
	 *	 3		//p[3] still equal 1
	 *
	 *	 p[0] = 0, p[1] = 0 , p[2] = 0 , p[3] = 1
	 *	 
	 *	 call function find_root(3):
	 *	 ->p[3] != 3
	 *	 ->p[3] = find_root(p[3] (1))
	 *
	 *	 ->find_root(1)
	 *	 ->p[1] != 1
	 *	 ->p[1] = find_root(p[1] (0))
	 *
	 *	 ->find_root(0)
	 *	 ->p[0] == 0
	 *	 ->return 0
	 *
	 *	 ->p[1] = 0 , p[3] = 0
	 *
	 *	 Graph after find_root(3):
	 *		 0
	 *	    /|\
	 *	   1 2 3
	 *    p[0] = 0 , p[1] = 0 , p[2] = 0 , p[3] = 0
	 *
	 * 	  same parent == same set
	 * 	  => find_root(u) == find_root(v)
	 * */


	/*
	 *	Union
	 *	Ex. Union 2 and 4
	 *	find_root(2) = 0 [return 0] , find_root(4) = 4 [return 4]
	 *	  p[find_root(2)] = find_root(4) => p[0] = 4 // set one to be a parent of another one => you can use p[find_root(4)] = find_root(2)
	 *    parent of 0 is 4 (Union) 
	 *
	 *	Graph after set parent :
	 *	    4
	 *	    |
	 *	    0
	 *	  / | \
	 *	 1  2  3
	 *	Graph after call function find_root of (0,1,2,3):
	 *	    4
	 *	  / | \ \
	 *	 0  1  2 3
	 *
	 * */
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int node , query;
	cin >> node >> query;
	iota(p,p+node,0); // set parent p[i] = i;
	int opr ; // union == 0 , check == 1
	while(query--){
		cin >> opr;
		if(opr){ // check
			int u,v;
			cin >> u >> v;
			if(find_root(u) == find_root(v)) cout << "Same Set\n";
			else cout << "Different Set\n";
		}
		else { // union
			int u,v;
			cin >> u >> v;
			p[find_root(u)] = find_root(v);
		}
	}
	return 0;
}
