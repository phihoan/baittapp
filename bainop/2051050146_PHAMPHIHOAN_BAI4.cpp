#include <iostream>
using namespace std;

void Input(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i + 1 << "] : ";
        cin >> a[i];
    }
}
void Print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}

void FindDem(int a[], int n, int x)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            dem++;
            cout << x << " xuat hien o vi tri a[" << i << "]" << endl;
        }
    }
    if (dem == 0)
    {
        cout << x << " khong co trong danh sach!";
    }
    else
    {
        cout << x << " xuat hien " << dem << " lan" << endl;
    }
}

int main()
{

    int a[100];
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << endl;
    Input(a, n);
    cout << endl;
    Print(a, n);
    cout << endl;
    int x;
    cout << "Nhap gia tri can tim: ";
    cin >> x;
    FindDem(a, n, x);
    cout << endl;
    system("pause");
    return 0;
}