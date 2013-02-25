#include <iostream>

using namespace std;

int main()
{
    int fibs[35];
    fibs[0] = 1;
    fibs[1] = 2;
    for (int i = 2; i < 35; i++)
    {
        fibs[i] = fibs[i-2] + fibs[i-1];
    }
    int z;
    cin >> z;
    int i = 34;
    while (z > 0 && i > 0)
    {
        if (z >= fibs[i])
            z = z - fibs[i];
        i--;
        cout << z << endl;
    }
}
