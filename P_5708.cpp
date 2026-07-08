#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    float p = 0.5 * (a + b + c);
    float s = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << fixed << setprecision(1) << s << endl;
    return 0;
}