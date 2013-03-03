#include <iostream>
#include <cstdlib>

using namespace std;

struct node{
	int data;
	struct node* next;
};

int main(){

	int n;
	int i = 0;

	struct node* con;
	struct node* root = new node;
	root->next = NULL;
	root->data = 0;
	con = root;

	cout << "How many elements?  ";
	cin >> n;

	//add them to list
	for (i = 1; i <= n; i++){

		//traverse list
		while(con->next != NULL){
			con = con->next;
		}

		node* el = new node;
		con->next = el;
		el->next = NULL;
		el->data = i;
	
	}

	//write it out
	while(root->next != NULL){
		root = root->next;
		cout << root->data << endl;
	}
	
	system("PAUSE");
	return 0;
}