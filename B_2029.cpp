#include <iostream>
#include <cmath>

#define PI 3.14
using namespace std;

int main()
{
    int r, h;
    cin >> h >> r;
    float v = pow(r, 2) * h * PI / 1000;
    int n = int(ceil(20.0 / v));
    cout << n << endl;
    return 0;
}