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

void insertionSort(int arr[], int length) {

	int i, j, tmp;

	/*
	 * algorithm
	 */
    for (i = 1; i < length; i++) {
        j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
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

    insertionSort(a, 10);

}