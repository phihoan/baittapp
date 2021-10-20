#include <iostream>
using namespace std;
void Nhapman(int a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "]= ";
        cin >> a[i];
    }
}
void xuatmang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
}
void insert(int a[], int &n, int i, int x)
{
    for (int j = n; j >= i; j--)
    {
        a[j] = a[j - 1];
    }
    a[i] = x;
    n++;
}
void Delete(int a[], int &n, int i)
{
    for (int j = i; j < n; j++)
    {
        a[j] = a[j + 1];
    }
    n--;
}
int main()
{
    int n;
    int i, x;
    int a[100];
    cout << "Nhap N; ";
    cin >> n;
    Nhapman(a, n);
    cout << "Mang vua nhap:\n ";
    xuatmang(a, n);
    cout << "\nVi tri can chen: ";
    cin >> i;
    cout << "Nhap so can chen: ";
    cin >> x;
    insert(a, n, i, x);

    xuatmang(a, n);
    cout << "\nVi tri can xoa: ";
    cin >> i;
    Delete(a, n, i);
    xuatmang(a, n);
    return 0;
}