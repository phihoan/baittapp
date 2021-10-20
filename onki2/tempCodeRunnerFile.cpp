#include <iostream>
using namespace std;
int main()
{
    int a, mile;
    cout << "Nhap toc doc xe may(km/h): ";
    cin >> a;
    mile = a / 1.609344;
    cout << "Toc do " << a << " km/h bang " << mile << " mile/h" << endl;
    return 0;
}