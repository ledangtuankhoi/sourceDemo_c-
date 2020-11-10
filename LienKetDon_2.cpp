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
    temp = SN.head;
    // temp thuộc danh sach So nguyên (SN)

    while (temp -> next  != NULL)
    {
        cout << "\n\n " << temp << " " << temp->info << " " << temp->next;
        temp = temp ->next;
    }
}

node *Search(list &l, node *x)
{
    node *p;
    p = l.head;
    while (p -> next != NULL && p -> info != x -> info)
        p = p -> next;
    return p;
}
int SearchInfo (list SN, int x)
{
    node *temp;
    temp = new node;
    temp = SN.head;
    while (temp -> next != NULL)
    {
        if (temp -> info == x)
        {
            return 1;
        }
        temp = temp -> next;
    }
    cout << "khong tim thay";
    return 0;
}

int InsertAfterNode (list &SN, int p, node *q) 
//q la vi tri can chen
{
    // if (Search(SN,q) == 0 ) return 0;
    node *x;
    x = creatNode(p);
    if (q != NULL)
    {
        x->next = q->next;
        q->next = x;
    }
    else 
    {
        AddheadList(SN,x);
    }
    // XuatDS(SN);
}

void delnodeinlist(list &l, node *x)
// danh sach list vaf phan tu x muon xoa
{
    cout << "delnodeinlist";
    node *temp, *q;
    // temp = new node;
    temp = l.head;
    
}

int main()
{

    list SN;
    node *p;
    NhapVaDS(SN);
    // XuatDS(SN);
    // cout << SN.head << "\n";
    // cout << SN.head -> next << "\n";
    // cout << SN.head -> info << "\n";

    // cout << SN.tail << "\n";
    // cout << SN.tail -> next << "\n";
    // cout << SN.tail -> info << "\n";

    // SearchInfo(SN,1);
    // cout << Search(SN,creatNode(3));

    InsertAfterNode(SN,22,creatNode(4));

    // AddheadList(SN,creatNode(28));

    // delnodeinlist(SN,creatNode(1));
    XuatDS(SN);
    
}