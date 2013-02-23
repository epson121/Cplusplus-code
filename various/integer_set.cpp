/*
* Given a set containing random distinct numbers in no particular order (with gaps), 
* what is the smallest natural number that is not contained in the given set?
*
* Example: [8 4 2 1 0 3 5 6 7 9 15 20 30] - > 10
*/
#include <iostream>
#include <cstdlib>

using namespace std;

bool *in_set;
int t, n, element; 
int* set;

int not_in_set(int set[]){
	cout << "Stuff" << endl;
	int i;
	for (i = 1; i <= n; i++)
	{
		in_set[set[i]] = 1;
	}
	
	for (int i = 1; i <= t; i++)
	{
		if (in_set[i] == 0)
			return i;
	}
	return 0;
}

int main(){
	
	cout << "Top limit: " << endl;
	cin >> t;
	in_set = new bool[t+1];
	cout << "Number of elements: " << endl;
	cin >> n;
	if (n > t){
		cout << "Number too high. Will exit now.";
		return 0;
	}

	set = new int[n+1];
	for (int i = 1; i <= n; i++)
	{
		cout << "Enter an element: " << endl;
		cin >> element;
		if (element > t){
			cout << "Number too high. It will be ignored." << endl;
			set[i] = 0;
		}
		else
			set[i] = element;
	}
	cout << "Smallest positive integer not in set is:" << not_in_set(set) << endl;
	system("PAUSE");
	return 0;
}