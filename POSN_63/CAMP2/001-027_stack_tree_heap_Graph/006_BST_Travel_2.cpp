#include<bits/stdc++.h>
using namespace std;
struct node {
	int num;
	node *l, *r;
};
node *createnode(int n) {
	node *tmp;
	tmp = (node*)malloc(sizeof(node));
	tmp->num=n;
	tmp->l=tmp->r=NULL;
	return tmp;
}
void pre(node* run) {
	if(run==NULL) return;
	cout << run->num << " ";
	pre(run->l);
	pre(run->r);
}
void pos(node* run) {
	if(run==NULL) return;
	pos(run->l);
	pos(run->r);
	cout << run->num << " ";
}
void in(node* run) {
	if(run==NULL) return;
	in(run->l);
	cout << run->num << " ";
	in(run->r);
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,num;
	cin >> n >> num;
	node *run, *root = createnode(num);
	for(int i=0; i<n-1; ++i) {
		cin >> num;
		run=root;
		while(run!=NULL) {
			if(num<run->num && run->l==NULL) {
				run->l = createnode(num);
				break;
			}
			else if(num>run->num && run->r==NULL) {
				run->r = createnode(num);
				break;
			}
			else if(num<run->num)
				run=run->l;
			else
				run=run->r;
		}
	}
	pre(root);
	cout << "\n";
	pos(root);
	cout << "\n";
	in(root);
	cout << "\n";
	return 0;
}

