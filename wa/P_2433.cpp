#include <iostream>
#include <iomanip>
#include <cmath>
// 填上你觉得需要的其他头文件
using namespace std;
int main()
{
    int T;
    cin >> T;
    if (T == 1)
    {
        // 粘贴问题 1 的主函数代码，除了 return 0
        cout << "I love Luogu!";
    }
    else if (T == 2)
    {
        // 粘贴问题 2 的主函数代码，除了 return 0
        cout << 2 + 4 << " " << 10 - 2 - 4;
    }
    else if (T == 3)
    {
        cout << 14 / 4 << endl << 14 / 4 * 4 << endl << 14 % 4 << endl;
    }
    else if (T == 4)
    {
        cout << setprecision(6) << (500.0 / 3) << endl;
    }
    else if (T == 5)
    {
        cout << (260 + 220) / (12 + 20) << endl;
    }
    else if (T == 6)
    {
        cout << sqrt(6 * 6 + 9 * 9) << endl;
    }
    else if (T == 7)
    {
        int money = 100;
        money += 10;
        cout << money << endl;
        money -= 20;
        cout << money << endl;
        cout << 0 << endl;
    }
    else if (T == 8)
    {
        const float pi = 3.141593;
        const float r = 5.0;
        cout << 2 * pi * r << endl;
        cout << pi * r * r << endl;
        cout << 4.0 / 3 * pi * r * r * r << endl;
    }
    else if (T == 9)
    {
        cout << (((1 + 1) * 2 + 1) * 2 + 1) * 2 << endl;
    }
    else if (T == 10)
    {
        cout << 9 << endl;
    }
    else if (T == 11)
    {
        cout << 100.0 / 3 << endl;
    }
    else if (T == 12)
    {
        cout << 'M' - 'A' + 1 << endl;
        cout << char('A' + 17) << endl;
    }
    else if (T == 13)
    {
        double pi = 3.141593;
        double v1 = 4.0 / 3 * pi * 4 * 4 * 4;
        double v2 = 4.0 / 3 * pi * 10 * 10 * 10;
        int a = pow(v1 + v2, 1.0 / 3);
        cout << a << endl;
    }
    else if (T == 14)
    {
        cout << 50 << endl;
    }
    return 0;
}
