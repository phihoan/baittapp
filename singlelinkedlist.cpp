#include <iostream>
#include "conio.h"
using namespace std;
struct Node
{
    int data;
    Node *to;
};
Node *first;
void inti()
{
    first = NULL;
}
void input(int &x)
{
    cout << "Nhap x: ";
    cin >> x;
}
Node *search(int x)
{
    Node *p = first;
    while ((p != NULL) && (p->data != x))
        p = p->to;
    return p;
}
void duyet()
{
    Node *p = first;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->to;
    }
}
void duyet_chan()
{
    Node *p = first;
    while (p != NULL)
    {
        if (p->data % 2 == 0)
        {
            cout << p->data << " ";
        }
        p = p->to;
    }
}
void in_first(int x)
{
    Node *p = new Node;
    p->data = x;
    p->to = first;
    first = p;
}
void in_last(int x)
{
    Node *p = new Node;
    p->data = x;
    p->to = NULL;
    if (first == NULL)
        first = p;
    else
    {
        Node *q = first;
        while (q->to != NULL)
            q = q->to;
        q->to = p;
    }
}
int del_first()
{
    Node *p = first;
    if (first != NULL)
    {
        first = first->to;
        delete p;
        return 1;
    }
    return 0;
}
int del_last()
{
    Node *p, *q;
    p = first;
    q = NULL;
    if (first != NULL)
    {
        if (p != NULL)
        {
            while (p->to != NULL)
            {
                q = p;
                p = p->to;
            }
        }
        if (p != first)
            q->to = NULL;
        else
            first = NULL;
        delete p;
        return 1;
    }
    return 0;
}
void choice(int x)
{
    int c;
    do
    {
        cout << "1. tao danh sach rong: " << endl;
        cout << "2. them phan tu dau: " << endl;
        cout << "3. them phan tu cuoi: " << endl;
        cout << "4. duyet va xuat cac phan tu chan: " << endl;
        cout << "5. search: " << endl;
        cout << "6. xoa dau: " << endl;
        cout << "7. xoa cuoi: " << endl;
        cout << "8. xuat danh sach: " << endl;
        cout << "9. thoat " << endl;
        cin >> c;
        switch (c)
        {
        case 1:
            inti();
            break;
        case 2:
            input(x);
            in_first(x);
            break;
        case 3:
            input(x);
            in_last(x);
            break;
        case 4:
            duyet_chan();
            break;
        case 5:
            input(x);
            search(x);
            break;
        case 6:
            del_first();
            break;
        case 7:
            del_last();
            break;
        case 8:
            duyet();
            break;
        default:
            break;
        }
    } while (c >= 1 && c <= 8);
}

int main()
{
    int x = 0;
    choice(x);
    return 0;
}