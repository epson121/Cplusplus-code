#include <iostream>
#include <cstdlib>

using namespace std;

/*
* List that looks like this
*     
*   null <- [el] <-> [el] <-> [0] <-> [el] <-> [el] -> null
*/


struct node{
	int data;
	struct node* next;
	struct node* prev;
};

int main(){
	int i, n;
	char d;
	struct node* root = new node;
	root->data = 0;
	root->next = NULL;
	root->prev = NULL;

	struct node* rcon = root;
	struct node* lcon = root;

	cout << "How many elements?  ";
	cin >> n;
	for (i = 1; i <= n; i++){
		cout << "l or r ? ";
		cin >> d;
		node* el;
		//insert left
		if (d == 'l'){
			while(lcon->prev != NULL){
				lcon = lcon->prev;
			}
			el = new node;
			el->prev = NULL;
			el->next = lcon;
			el->data = i;
			lcon->prev = el;
		}
		//insert right
		else{
			while(rcon->next != NULL){
				rcon = rcon->next;
			}
			el = new node;
			el->next = NULL;
			el->prev = rcon;
			el->data = i;
			rcon->next = el;
		}
	}

	node* llast = lcon->prev;
	//print from left to right
	while(llast != NULL){
		cout << llast->data << endl;
		llast = llast->next;
	}
	
	node* rlast = rcon->next;
	cout << "R to L" << endl;
	//print from right to left
	while(rlast != NULL){
		cout << rlast->data << endl;
		rlast = rlast->prev;
	}

	system("PAUSE");
	return 0;
}