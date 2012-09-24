/*
The captain of the ship TITANIC is a little .... off the track. He needs 
to select the crew for the ship. But everyone seems to be eligible. So to 
test their intelligence, he plays a game. 
The contestants have to stand in a line. They are given the numbers in the 
order in which they stand, starting from 1. The captain then removes all the 
contestants that are standing at an odd position. 
Initially, standing people have numbers - 1,2,3,4,5...
After first pass, people left are - 2,4,...
After second pass - 4,....
And so on.
You want to board the ship as a crew member. Given the total number of 
applicants for a position, find the best place to stand in the line so that 
you are selected.
Input

First line contains the number of test cases t (t<=10^6). The next t lines 
contain integer n, the number of applicants for that case. (n<=10^9)
Output

Display t lines, each containg a single integer, the place where you would 
stand to win a place at TITANIC.
Example

Input:
2
5
12


Output:
4
8
*/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t, i, n;
    int* arr;
    int result;
    int* tempArray;
    int counter = 0;
    cin >> t;
    for (i = 0; i<t; i++)
    {
        cin >>n;
        int tmp = 1;
        if (n == 1)
        {
            result = 1;
            goto a;
        }    
        arr = new int[n];
        for(int j = 0; j < n; j++)
        {
          arr[j] = j+1;
        }
        

        while (tmp !=0)
        {
          tmp = (int)ceil(n/2);
          tempArray = new int[tmp];
          int ne = 1;
          for(int it = 0; it < tmp; it++)
          {
              tempArray[it] = arr[ne];
              ne +=2;
              result = tempArray[it];
          }
          arr = tempArray;
          counter++;
          n = tmp;
        }
        a: cout << result << endl;
    }
    return 0;
}












