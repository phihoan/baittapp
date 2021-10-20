#include <iostream>
using namespace std;

#define max 100

void Input(long a[], long n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Phan tu a[" << i << "] : ";
        cin >> a[i];
    }
    return;
}

void Output(long a[], long n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Phan tu a[" << i << "] : ";
        cout << a[i] << endl;
    }
    return;
}

long demss = 0, demgan = 0, demtoantu = 0;
void Q_Sort(long a[], long l, long r)
{
    demss++;
    if (l >= r)
        return;
    long i = l, j = r, x = a[(l + r) / 2];
    demgan += 3;
    long flag = 0;
    while (i < j)
    {
        long f1 = 0, f2 = 0;
        flag = 1;
        demss++;
        while (x > a[i])
        {
            f1 = 1;
            demss++;
            demtoantu++;
            i++;
        }
        while (x < a[j])
        {
            f2 = 1;
            demss++;
            demtoantu++;
            j--;
        }
        demss++;
        if (i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
            demtoantu += 3;
        }
        if (f1 == 0)
            demss++;
        if (f2 == 0)
            demss++;
    }
    if (flag == 0)
        demss++;
    Q_Sort(a, l, j);
    Q_Sort(a, i, r);
}
int main()
{
    long a[max];
    long n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    Input(a, n);
    Q_Sort(a, 0, n - 1);
    Output(a, n);
    cout << "So phep so sanh: " << demss << endl
         << "so phep gan: " << demgan << endl
         << "So phep toan: " << demtoantu << endl;
}
