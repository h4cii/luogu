#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdint>

using namespace std;

int main()
{
    int s, v;
    cin >> s >> v;

    int use = (s + v - 1) / v + 10;
    int time = 8 * 60;
    int start = time - use;
    while (start < 0)
        start += 24 * 60;
    cout << setfill('0') << setw(2) << start / 60 << ':' << setw(2) << start % 60 << endl;
    return 0;
}