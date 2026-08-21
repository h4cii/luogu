#include <iostream>

using namespace std;

int main()
{
    int m, t, s;
    cin >> m >> t >> s;
    int n = (t != 0) ? (s + t - 1) / t : m;
    int l = (m >= n) ? (m - n) : 0;
    cout << l << endl;
    return 0;
}