#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < abs(2 - i); k++)
        {
            cout << ' ';
        }
        for (int j = 0; j < min(2 * i + 1, 2 * (4 - i) + 1); j++)
        {
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}