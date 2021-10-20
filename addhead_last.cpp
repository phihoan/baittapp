#include <iostream>
using namespace std;

void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap arr[" << i << "]= ";
        cin >> arr[i];
    }
}

void output(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int search(int arr[], int n, int x)
{
    int i = 0;
    while ((i < n) && (arr[i] != x))
        i++;
    if (i == n)
        return -1;
    return i;
}
int insert(int arr[], int &n, int x, int i)
{
    if (i >= n && i < n)
    {
        for (int j = n; j >= i; j--)
            arr[j] = arr[j - 1];
        arr[i] = x;
        n++;
        return 1;
    }
    return 0;
}

int delet(int arr[], int &n, int i)
{
    if (i >= 0 && i < n)
    {
        for (int j = i; j < n - 1; j++)
            arr[j] = arr[j + 1];
        n--;
        return 1;
    }
    return 0;
}

int main()
{
    int n, x;
    int chon;
    int vitri = 0;
    int arr[100];

    cout << "Nhap n: ";
    cin >> n;

    while (n < 1 || n > 99)
    {
        cout << "ERROR!!! --- Vui long nhap lai: ";
        cin >> n;
    }

    do
    {
        cout << "=========Menu=======" << endl;
        cout << "1. Nhap mang" << endl;
        cout << "2. Xuat mang" << endl;
        cout << "3. Tim phan tu" << endl;
        cout << "4. Them phan tu" << endl;
        cout << "5. Xoa phan tu" << endl;
        cout << "6. Thoat" << endl;
        cout << "====================" << endl;
        cout << "Xin chon chuc nang:";
        cin >> chon;
        switch (chon)
        {
        case 1:
            cout << "Nhap mang:" << endl;
            input(arr, n);
            break;
        case 2:
            cout << "Mang vua nhap:" << endl;
            output(arr, n);
            break;
        case 3:
            cout << "Xin nhap gia tri tim:";
            cin >> x;
            vitri = search(arr, n, x);
            if (vitri != -1)
                cout << x << " xuat hien o vi tri : " << vitri << endl;
            else
                cout << x << " khong co " << endl;
            break;
        case 4:
            cout << "Xin nhap gia tri can chen:";
            cin >> x;
            cout << "Xin nhap vi tri can chen trong mang:";
            cin >> vitri;
            if (insert(arr, n, x, vitri) == 1)
            {
                cout << x << " da them vao mang thanhcong !" << endl;
            }
            else
                cout << x << " da them vao mang khong thanh cong !" << endl;
            break;
        case 5:
            cout << "Xin nhap vi tri can xoa trong mang:";
            cin >> vitri;
            if (delet(arr, n, vitri) == 1)
            {
                cout << "Phan tu tai vi tri:" << vitri << " da duoc xoa thanh cong !" << endl;
            }
            else
                cout << "Xoa khong thanh cong!" << endl;
            break;
        default:
            cout << "Bye bye !!!";
            break;
        }
    } while (chon >= 1 && chon < 6);

    return 0;
}