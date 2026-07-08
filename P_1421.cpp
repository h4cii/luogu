#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int cost = 19;
    int n = (a * 10 + b) / cost;
    cout << n << endl;
    return 0;
}