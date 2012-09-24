/*
Given the list of numbers, you are to sort them in non decreasing order.
Input

t – the number of numbers in list, then t lines follow [t <= 10^6]. 

Each line contains one integer: N [0 <= N <= 10^6]
Output

Output given numbers in non decreasing order.
*/

#include <iostream>

using namespace std;

int main()
{
    //int v[1000001]={0};
    int t, i , n,j ;
    int* arr;
    scanf("%d", &t);
    arr = new int[1000001]();
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        arr[n]++;
    }
    for (i = 0; i < 1000001; i++)
    {
       for (j = 0; j < arr[i]; j++)
            printf("%d", i);
    }
     cin >> n;  
}
