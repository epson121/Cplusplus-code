/*
* Simple tree traversal algorithms (preorder, inorder and postorder)
* on a small binary tree with 5 nodes.
* 
*/

#include <iostream>
#include <cstdlib>

using namespace std;

struct node{
	int data;
	struct node* left;
	struct node* right;
};

struct node* newNode(int data)
{
     struct node* node = (struct node*) malloc(sizeof(struct node));
     node->data = data;
     node->left = NULL;
     node->right = NULL;
 
     return(node);
}


void postorder(struct node* node){
	if (node == NULL)
		return;

	postorder(node->left);
	postorder(node->right);
	cout << node->data << endl;
}

void inorder(struct node* node){
	if (node == NULL)
		return;

	inorder(node->left);
	cout << node->data << endl;
	inorder(node->right);
}

void preorder(struct node* node){
	if (node == NULL)
		return;

	cout << node->data << endl;
	preorder(node->left);
	preorder(node->right);
}


int main(){

	cout << "stuff!";
	struct node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	cout << "POSTORDER" << endl;
	postorder(root);
	cout << "INORDER" << endl;
	inorder(root);
	cout << "PREORDER" << endl;
	preorder(root);

	system("PAUSE");
	return 0;
}