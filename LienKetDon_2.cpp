#include <iostream>
using namespace std;

typedef struct tagNode{
    int info;
    struct tagNode *next;
}node;

typedef struct taglist
{
    node *head;
    node *tail;
}list;


node *creatNode (int x)
{
    node *p;
    p = new node;
    p -> info = x;
    p -> next = NULL;
    return p;
}

void creatList(list &l)
{
    l.head = NULL;
    l.tail = NULL;
}

void AddheadList(list &l, node *p)
{
    if (l.head == NULL)
    {
        l.head = p;
        l.tail = l.head;
    }
    else 
    {
        p -> next = l.head;
        l.head = p;
    }
}

void AddtailList(list &l, node *x)
{
    if (l.head == NULL)
    {
         l.head = x;
         l.tail = l.head;
    }
    else 
    {
        l.tail -> next = x ;
        l.tail = x;
    }
}

void NhapVaDS (list &SN)
{
    int a[5] = {5,4,3,2,1};
    node *temp;
    for (int i = 0; i < 5; i++)
    {
        // AddHeadList(SN,creatNode(rand() % 100)); // nhap so ngau nhien
        AddheadList(SN,creatNode(a[i]));
        // cout << "\n\nvi tri: " << SN.head;
        // cout << "\nvi tri ket tiep: " << SN.head ->next;
        // cout << "\ngia tri (info): " << SN.head ->info;

    }
}
void XuatDS(list &SN)
{
    node *temp;
    cout <<"\n----------------------";
    temp = SN.head; // temp thuộc danh sach So nguyên (SN)
    while (temp -> next  != NULL)
    {
        // temp = temp ->next;
        cout << "\n\nvi tri: " << temp; 
        cout << "\nvi tri ket tiep: " << temp ->next; 
        cout << "\ngia tri (info): " << temp ->info;

        temp = temp ->next;
    }
}

int main()
{

    list SN;
    // NhapVaXuatDS();
    NhapVaDS(SN);
    // XuatDS(SN);
    cout << SN.head << "\n";
    cout << SN.head -> next << "\n";
    cout << SN.head -> info << "\n";

    cout << SN.tail << "\n";
    cout << SN.tail -> next << "\n";
    cout << SN.tail -> info << "\n";
    
}