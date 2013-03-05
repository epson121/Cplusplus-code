/*
Consider the searching problem:

Input: A sequence of n numbers A = a1, a2, . . . , an and a value v.
Output: An index i such that v = A[i] or the special value NIL if v does not appear in A.

*/

#include <iostream>
#include <cstdlib>

using namespace std;

int linearSearch(int arr[], int length, int needed){
	int j;

    for (j = 0; j < length; j++) {
    	if (arr[j] == needed){
    		cout << needed << " is in the array. Its index number is " << j << "." << endl;
    		return j;
    	}
    }
    return 0;
}

int main(){
	int a[10];
	
	for (int i = 0; i < 10; i++){
    	a[i] = rand() % 10;
    }
    
    int needed = 2;

    cout << "Linear search: " << endl;
    linearSearch(a, 10, needed);

    cout << "[" ;
    for (int i = 0; i < 10; i++){
    	cout << a[i] << " " ;
    }
    cout << "]" << endl;
}
