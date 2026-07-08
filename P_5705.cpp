#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    double a;
    cin >> a;
    string b = to_string(a);
    reverse(b.begin(), b.end());
    a = stod(b);
    cout << a << endl;

    // string b;
    // cin >> b;
    // reverse(b.begin(), b.end());
    // cout << b << endl;
    return 0;
}