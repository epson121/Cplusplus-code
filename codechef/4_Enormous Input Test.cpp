/*
The purpose of this problem is to verify whether the method you are using to
read input data is sufficiently fast to handle problems branded with the
enormous Input/Output warning. You are expected to be able to process at
least 2.5MB of input data per second at runtime.
Input

The input begins with two positive integers n k (n, k<=107). The next n
lines of input contain one positive integer ti, not greater than 109, each.
Output

Write a single integer to output, denoting how many integers ti are
divisible by k.
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    int k;
    long long int num;
    int sum = 0;
    scanf("%ld",&n);
    scanf("%ld",&k);
    for(int i = 0; i < n; i++)
    {
       scanf("%ld",&num);
       if ((num % k) == 0)
          sum++;
    }
    printf("%ld",sum);
    return 0;
}
