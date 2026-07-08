#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, gap;
    cin >> a >> b >> c >> d;
    int tim1 = a * 60 + b;
    int tim2 = c * 60 + d;
    if (tim1 > tim2)
    {
        gap = tim2 - tim1 + 24 * 60;
    }
    else
    {
        gap = tim2 - tim1;
    }
    cout << gap / 60 << " " << gap % 60 << endl;
    return 0;
}