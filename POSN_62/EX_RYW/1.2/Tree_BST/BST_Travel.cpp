#include<bits/stdc++.h>
using namespace std;
struct Node {
	Node *left, *right;
	int num;
};
typedef struct Node* node;
node root;
node Insert(node tree, int x) {
	if(tree == nullptr) {
		tree = new Node();
		//tree = (node)malloc(sizeof(Node)) -> in c
		tree->left = tree->right = nullptr;
		tree->num = x;
		return tree;
	}
	if(x > tree->num)
		tree->right = Insert(tree->right, x);
	else tree->left = Insert(tree->left, x);
	return tree;
}
void prefix(node u = root) {
	if(u==nullptr) return;
	cout << u->num << " ";
	prefix(u->left);
	prefix(u->right);
}
void postfix(node u = root) {
	if(u==nullptr) return;
	postfix(u->left);
	postfix(u->right);
	cout << u->num << " ";
}
void infix(node u = root) {
	if(u == nullptr) return;
	infix(u->left);
	cout << u->num << " ";
	infix(u->right);
}
void bfs() {
	queue<node> qu;
	qu.push(root);
	while(!qu.empty()) {
		node u = qu.front();
		qu.pop();
		if(u == nullptr) continue;
		cout << u->num << " ";
		qu.push(u->left), qu.push(u->right);
	}
}
void print() {
	prefix();
	cout << "\n";
	infix();
	cout << "\n";
	postfix();
	cout << "\n";
	bfs();
	cout << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	for(cin >> n; n--;) {
		int x;
		cin >> x;
		root = Insert(root, x);
	}
	print();
	return 0;
}
