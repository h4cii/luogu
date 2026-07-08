#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    unsigned int a, b, c;
    cin >> a >> b >> c;
    int score = round(a * 0.2 + b * 0.3 + c * 0.5);
    cout << score << endl;
    return 0;
}