#include <iostream>
using namespace std;
int UCLN(int a, int b)
{
    if (a == b)
        return a;
    else
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return UCLN(a, b);
}
int main()
{
    int n = 6;
    UCLN(6, 2);
    cout << UCLN(6, 2);
    return 0;
}