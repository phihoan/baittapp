#include <iostream>
using namespace std;

struct Node
{
    int info;
    Node *link;
};

Node *first;

void init()
{
    first = NULL;
}

void Input(int &x)
{
    cout << "Nhap gia tri can them/tim:";
    cin >> x;
}

void Insert_first(int x)
{
    Node *p;
    p = new Node;
    p->info = x;
    p->link = first;
    first = p;
}

void Insert_last(int x)
{
    Node *p;
    p = new Node;
    p->info = x;
    p->link = NULL;
    if (first == NULL)
        first = p;
    else
    {
        Node *q = first;
        while (q->link != NULL)
            q = q->link;
        q->link = p;
    }
}

void Process_list()
{
    Node *p;
    p = first;
    while (p != NULL)
    {
        cout << p->info << endl;
        p = p->link;
    }
}
void Process_chan()
{
    Node *p;
    p = first;
    while (p != NULL)
    {
        if (p->info % 2 == 0)
        {
            cout << p->info << endl;
        }
        p = p->link;
    }
}
Node *Search(int x)
{
    Node *p = first;
    while ((p != NULL) && (p->info != x))
        p = p->link;
    return p;
}

int Delete_first()
{
    if (first != NULL)
    {
        Node *p = first;
        first = first->link;
        delete p;
        return 1;
    }
    return 0;
}
int Delete_last()
{
    if (first != NULL)
    {
        Node *p, *q;
        p = first;
        q = NULL;
        if (p != NULL)
            while (p->link != NULL)
            {
                q = p;
                p = p->link;
            }
        if (p != first)
            q->link = NULL;
        else
            first = NULL;
        delete p;
        return 1;
    }
    return 0;
}

void Menu(int x)
{
    int c;
    do
    {
        //menu
        cout << "\n=================Menu=============" << endl;
        cout << "1. Tao danh sach rong" << endl;
        cout << "2. Them phan tu vao dau sach" << endl;
        cout << "3. Them phan tu vao cuoi danh sach" << endl;
        cout << "4. Duyet va xuat cac phan tu chan" << endl;
        cout << "5. Tim kiem" << endl;
        cout << "6. Xoa phan tu dau" << endl;
        cout << "7. Xoa phan tu cuoi" << endl;
        cout << "8. Xuat danh sach" << endl;
        cout << "9. Thoat chuong trinh" << endl;
        cout << "==================================" << endl;
        cout << "Xin chon chuc nang:";
        cin >> c;
        switch (c)
        {
        case 1:
            init();
            break;
        case 2:
            Input(x);
            Insert_first(x);
            break;
        case 3:
            Input(x);
            Insert_last(x);
            break;
        case 4:
            cout << "Cac phan tu co gia tri la so chan trong danh dach : " << endl;
            Process_chan();
            break;
        case 5:
            Input(x);
            if (Search(x) != NULL)
                cout << x << " co xuat hien trong danh sach tai Node : " << Search(x) << endl;
            else
                cout << x << " khong co xuat hien trong danh sach " << endl;
            break;
        case 6:
            if (Delete_first() != 0)
                cout << "Gia tri dau da duoc xoa ! " << endl;
            else
                cout
                    << "Gia tri dau khong xoa duoc !" << endl;
            break;
        case 7:
            if (Delete_last() != 0)
                cout << "Gia tri cuoi da duoc xoa ! " << endl;
            else
                cout
                    << "Gia tri cuoi khong xoa duoc ! " << endl;
            break;
        case 8:
            cout << "Danh sach cac phan tu : " << endl;
            Process_list();
            break;
        default:
            cout << "Bye bye" << endl;
            break;
        }
    } while (c >= 1 && c <= 8);
}
int main()
{
    int x = 0;
    Menu(x);
    system("pause");
    return 0;
}