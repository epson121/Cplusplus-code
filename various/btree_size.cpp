/*
*  BS-tree size solved with and without additional memory.
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

int i = 0;

void treeSize(struct node* node){
	if (node == NULL)
		return;

	treeSize(node->left);
	treeSize(node->right);
	i++;
}

int treeSize_no_extra_memory(struct node* node){
	if (node == NULL)
		return 0;
	else
		return (treeSize_no_extra_memory(node->left) + 1 + treeSize_no_extra_memory(node->right));
}

int main(){

	cout << "stuff!";
	struct node* root = newNode(1);
	root->left = newNode(2);
	

	cout << "Tree size: " << endl;
	treeSize(root);
	cout << i << endl;
	cout << treeSize_no_extra_memory(root) << endl;
	

	system("PAUSE");
	return 0;
}