#include <iostream>
using namespace std;

#define max 100

void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
void Input(long a[], long n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void Output(long a[], long n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void Q_Sort(long a[], long l, long r)
{
    if (l >= r)
        return;
    long i = l, j = r - 1, x = a[(l + r) / 2];
    while (i < j)
    {
        while (x > a[i])
        {
            i++;
        }
        while (x < a[j])
        {
            j--;
        }
        if (i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if (l < j)
        Q_Sort(a, l, j);
    if (i < r)
        Q_Sort(a, i, r);
}
int main()
{
    long a[100];
    long n;
    cout << "Nhap so phan tu: " << endl;
    cin >> n;
    cout << "Nhap mang: " << endl;
    Input(a, n);
    cout << "Mang sau khi sap xep la: " << endl;
    Q_Sort(a, 0, n - 1);
    Output(a, n);
}
int main()
{
    long a[100];
    long n;
    cout << "nhap gia tri n :";
    cin >> n;
    do
    {
        cout << "nhap sai nhap lai : ";
        cin >> n;
    } while (n < 0 && n > 100);
    cout << "Nhap mang: " << endl;
    Input(a, n);
    cout << "Mang sau khi sap xep la: " << endl;
    Q_Sort(a, 0, n - 1);
    Output(a, n);
    system("pause");
    return 0;
}