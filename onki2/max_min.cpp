#include <iostream>
using namespace std;

int main()
{
    int so;
    int tong = 0;
    cin >> so;
    while (so != 0)
    {
        tong += so % 10;
        so /= 10;
    }
    cout << tong << endl;
    return 0;
}