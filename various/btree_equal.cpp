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

int identical_trees(struct node* node1, struct node* node2){
	
	if (node1 == NULL && node2 == NULL)
		return 1;
	else if (node1 != NULL && node2 != NULL) {
		return (
			node1->data == node2->data &&
			identical_trees(node1->left, node2->left) &&
			identical_trees(node1->right, node2->right)
		);
	}
	else
		return 0;
}

int treeSize_no_extra_memory(struct node* node){
	if (node == NULL)
		return 0;
	else
		return (treeSize_no_extra_memory(node->left) + 1 + treeSize_no_extra_memory(node->right));
}

int main(){

	cout << "stuff!" << endl;
	struct node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	struct node* root2 = newNode(1);
	root2->left = newNode(2);
	root2->right = newNode(3);
	root2->left->left = newNode(4);
	root2->left->right = newNode(5);

	
    if(identical_trees(root, root2))
        cout << "Both trees are identical." << endl;
    else
        cout << "Trees are not identical." << endl;

	system("PAUSE");
	return 0;
}