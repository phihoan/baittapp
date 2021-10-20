#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    /* data */
};
Node *first;
void inti()
{
    first = NULL;
}
// ham nhap
void nhap(int &x)
{
    cout << "nhapx";
    cin >> x;
}
// them dau ds
void insert_1st(int x)
{
    Node *p;
    p = new Node;
    p->data = x;
    p->next = first;
    first = p;
}
//them cuoi ds
void insert_last(int x)
{
    Node *p;
    p = new Node;
    p->data = x;
    p->next = NULL;
    if (first == NULL)
    {
        first = p;
    }
    else
    {
        Node *q = first;
        while (q - > next != NULL)
        {
            q = q->next;
        }
        q->next = q;
    }
}
// duyet ds
void process()
{
    Node *p;
    p = first;
    while (p != NULL)
    {
        cout << p->data << endl;
        p = p->next;
    }
}
// duyet ds chan
void process1()
{
    Node *p;
    p = first;
    while (p != NULL)
    {
        if (p->data % 2 == 0)
        {
            cout << p->data << endl;
        }
        p = p->next;
    }
}
// tim kiem
Node *search(int x)
{
    Node *p;
    p = first;
    while ((p != NULL) && (p->data != x))
    {
        p = p->next;
    }
    return p;
}
// xoa dau
int delete1()
{
    if (first != NULL)
    {
        Node *p;
        p = first;
        first = p->next;
        delete p;
        return 1;
    }
    return 0;
}
int delete2()
{
    if (first != NULL)
    {
        Node *p, *q;
        p = first;
        q = NULL;
        if (p != NULL)
            while (p->next != NULL)
            {
                q = p;
                p = p->next;
            }
        if (p != first)
            q->next = NULL;
        else
            first = NULL;
        delete p;
        return 1;
    }
    return 0;
}
//  chuc nag
void chon(int x)
{
    int c;
    do
    {
        cout << "=================Menu=============" << endl;
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
        case 1:
            inti();
        break;
    case 2:
        nhap(x);
        insert_1st(x);
        break;
    case 3:
        nhap(x);
        insert_last(x);
        break;
    case 4:
        process1();
        break;
    case 5:
        nhap(x);
        search(x);
        break;
    case 6:
        delete1();
        break;
    case 7:
        delete2();
        break;
    case 8:
        process1();
        break;
    default:
        cout << "byebye" << endl;
        break;

    } while (c > 0 && c < 9)
}
int main()
{
    int x;
    chon(x);
    return 0;
}