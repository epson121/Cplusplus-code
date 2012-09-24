/*
You are asked to calculate factorials of some small positive integers.

Input
An integer t, 1<=t<=100, denoting the number of testcases, 
followed by t lines, each containing a single integer n, 1<=n<=100.

Output
For each integer n given at input, display a line with the value of n!
*/
#include <iostream>
using namespace std;

int main()
{
    int t, n, i, m, x;
    int arr[500];
    int temp;
    cin >> t;
    int j;
    for(j = 0; j < t; j++)
    {
       cin >> n;
       i = 1;
       m = 1;
       arr[0] = 1;
       temp = 0;
       while(i <= n)
       {
         x = 0;
         for(int z = 0; z < m; z++)
         {
           x = arr[z] * i + temp;
           arr[z] = x%10;
           //cout << arr[z] << endl;
           temp = x/10;
         }
         while(temp >= 1)
         {
          int div = temp % 10;
          arr[m] = div;
          //cout << arr[m] << endl;
          temp = temp/10;
          m++;
         }
         i++;
       }
       for (int k = m-1; k >=0 ; k--)
       {
           cout << arr[k];
       }
       cout << endl;
    }
    return 0;
}
