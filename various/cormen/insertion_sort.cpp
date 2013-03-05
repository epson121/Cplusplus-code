/*
Insertion sort

Input: A sequence of n numbers
Output: A permutation (reordering) of the input sequence such that numbers are sorted

* 	efficient algorithm for sorting a small number of elements
* 	insertion sort works the way many people sort a hand of playing cards. We start with an 
	empty left hand and the cards face down on the table. We then remove one card at a
	time from the table and insert it into the correct position in the left hand. To find the correct
	position for a card, we compare it with each of the cards already in the hand, from right to left
*/

#include <iostream>
#include <cstdlib>

using namespace std;

void insertionSortAsc(int arr[], int length) {

	int i, j, tmp;

	/*
	 * algorithm
	 */
    for (j = 1; j < length; j++) {
        i = j;
        while (i > 0 && arr[i - 1] > arr[i]) {
            tmp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = tmp;
            i--;
        }
    }

    /*
     * print
     */
    for (i = 0; i < length; i++){
    	cout << arr[i] << endl;
    }
}

void insertionSortDesc(int arr[], int length){

    int i, j, tmp;

    /*
     * algorithm
     */
    for (j = 1; j < length; j++) {
        i = j;
        while (i > 0 && arr[i - 1] < arr[i]) {
            tmp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = tmp;
            i--;
        }
    }

    /*
     * print
     */
    for (i = 0; i < length; i++){
        cout << arr[i] << endl;
    }
}

int main(){
	int a[10];
	
	for (int i = 0; i < 10; i++){
    	a[i] = rand() % 10;
    }
    cout << "Ascending" << endl;
    insertionSortAsc(a, 10);
    cout << "Descending: " << endl;
    insertionSortDesc(a, 10);
}