#include <iostream>

using namespace std;

int main()
{
    int8_t n = 'A' - 'a';
    char a;
    cin >> a;
    cout << char(a + n) << endl;
    return 0;
}