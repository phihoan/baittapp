#include <iostream>
#define MAX 100
using namespace std;
int a[MAX];
int front = 0, rear = 0;

void them(int data)
{
    if (rear == MAX)
        cout << "Full " << endl;
    else
    {
        a[rear++] = data;
    }
}

void dele()
{
    if (front == rear)
        cout << "Rong ";
    else
    {
        a[front++] = 0;
    }
}

int Front()
{

    return a[front];
}

int Size()
{
    return rear - front;
}
int main()
{
    them(5);
    them(11);
    them(11);
    them(11);
    them(11);
    them(11);
    dele();
    them(112);
    cout << Front() << endl;
    cout << Size();
    return 0;
}
