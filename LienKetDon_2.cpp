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
    while (p -> next != NULL && p -> info != x -> info && p->next != x->next)
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

int InsertAfterNode (list &l, int p, int q) 
//q la vi tri can chen
{
    if (q <= 0 || l.head == NULL) return 0;
    node *temp = l.head;
    while (temp->info != q)
    {
        temp = temp->next;
    }
    //temp == q
    // if (Search(SN,q) == 0 ) return 0;

    if (q == temp->info)
    {
        node *p1 = creatNode(p);
        p1->next = temp->next;
        temp->next = p1;
        
    }
    // XuatDS(l);
    return 0;
}

void outNode(node *temp)
{
    cout << "\n\n " << temp << " " << temp->info << " " << temp->next;
}

void delhead (list &l)
{
    node *p = l.head;
    if (l.head = NULL)
        cout << "khoong co gi de xoa";
    else 
        
        // p->next = l.head->next;
        delete l.head;
        l.head = p->next;
}


void delnodeinlist(list &l, int x)
// danh sach list vaf phan tu x muon xoa
{
    node *temp = l.head;
    node *tempOLD;
    node *tempNEW;
    while (temp->info != x)
    {
        tempOLD = temp;
        temp = temp->next;
        tempNEW = temp->next;
    }
    if (x == l.head->info)
    {
        // delete l.head;
        // l.head = l.head->next;
    }
    if (temp->info == x)
    {
        tempOLD->next = temp->next;
    }
    else
    {
        cout << "END";
        // return 0;
    }
    

    XuatDS(l);
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

    // InsertAfterNode(SN,22,-1);
    // if (InsertAfterNode(SN,22,-1) == 0)
    //     cout << "khoong dung vi tri";

    // AddheadList(SN,creatNode(28));

    // delnodeinlist(SN,creatNode(1));

    // delnodeinlist(SN,2);

    // delhead(SN);
    // deltai(SN);
    XuatDS(SN);
    return 0;
}