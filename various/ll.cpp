#include <iostream>
#include <cstdlib>

using namespace std;

struct node{
	int data;
	struct node* next;
};

node* head = NULL;
node* temp = new node;
temp->data = 1;
temp->next = head;
head = temp;


int main(){

	system("PAUSE");
	return 0;
}