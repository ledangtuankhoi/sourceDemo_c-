#include <iostream>  
using namespace std;
typedef struct tagnode
{
    int thongtin;
    struct tagnode *nodenext;
}node;

typedef struct taglist
{
    node *dauDS;
    node *cuoiDS;
}list;


node *taonode (int x)
{
    node *diem;
    diem = new node;
    if (diem == NULL ) exit (1);
    diem ->  thongtin = x;
    diem ->   nodenext = NULL;
    return diem;
}

void taoDS (list &list)
{
    list.dauDS = NULL;
    list.cuoiDS = NULL;
}

void AddHeadList (list &list, node *diem)
{
    if (list.dauDS == NULL)
    {
        list.dauDS = diem;
        list.cuoiDS = list.dauDS;
    }
    else 
    {
        diem ->   nodenext = list.dauDS;
        list.dauDS = diem;
    }
}

void AddTailList (list &list, node *diem)
{
    if (list.dauDS == NULL)
    {
        list.dauDS = diem;
        list.cuoiDS = list.dauDS;
    }
    else 
    {
        list.cuoiDS ->  nodenext = diem;
        list.cuoiDS = diem;
    }
}

void InsertAfterQ (list &list, node *x, node *q)
//x là nút cần chèn vào vị trí q
{
    if (q != NULL)
    {
        x -> nodenext = q -> nodenext;
        q -> nodenext = x;
        if (list.cuoiDS = q)
        {
            list.cuoiDS = q;
        }
    }
    else 
    {
        AddHeadList(list,q);
    }
}

void NhapVaXuatDS ()
{
    int a[5] = {5,4,3,2,1};
    // for (int i = 0; i < 5; i++)
    // {
    //     a[i] = rand() % 100;
    // }
    list SN; // so guyen
    node *temp;
    for (int i = 0; i < 5; i++)
    {
        // AddHeadList(SN,taonode(rand() % 100));
        AddHeadList(SN,taonode(a[i]));
        cout << "\n\nvi tri: " << SN.dauDS;
        cout << "\nvi tri ket tiep: " << SN.dauDS ->nodenext;
        cout << "\ngia tri (thongtin): " << SN.dauDS ->thongtin;

    }
cout <<"\n----------------------";
    temp = SN.dauDS; // temp thuộc danh sach So nguyên (SN)
    while (temp -> nodenext  != NULL)
    {
        // temp = temp ->nodenext;
        cout << "\n\nvi tri: " << temp; 
        cout << "\nvi tri ket tiep: " << temp ->nodenext; 
        cout << "\ngia tri (thongtin): " << temp ->thongtin;

        temp = temp ->nodenext;
    }
    
}


void NhapVaDS (list &SN)
{
    int a[5] = {5,4,3,2,1};
    node *temp;
    for (int i = 0; i < 5; i++)
    {
        // AddHeadList(SN,creatNode(rand() % 100)); // nhap so ngau nhien
        AddHeadList(SN,taonode(a[i]));
        // cout << "\n\nvi tri: " << SN.head;
        // cout << "\nvi tri ket tiep: " << SN.head ->nodenext;
        // cout << "\ngia tri (thongtin): " << SN.head ->thongtin;

    }
}
void XuatDS(list &SN)
{
    node *temp;
    cout <<"\n----------------------";
    temp = SN.dauDS; // temp thuộc danh sach So nguyên (SN)

    while (temp -> nodenext  != NULL)
    {
        // temp = temp ->nodenext;
        // cout << "\n\nvi tri: " << temp; 
        // cout << "\nvi tri ket tiep: " << temp ->nodenext; 
        // cout << "\ngia tri (thongtin): " << temp ->thongtin;
        cout << "\n\n " << temp << " " << temp->thongtin << " " << temp->nodenext;
        temp = temp ->nodenext;
    }
}
int removeAfterQ (list &l, node *q, int &x)
{
    node * p;
    if (q != NULL)
    {
        p = q->nodenext;
        if (p != NULL)
        {
            if (p == l.cuoiDS)
                l.cuoiDS = q;
            q->nodenext = p->nodenext;
            x = p->thongtin;
            delete p;
        }
        return 1;
    }
    else 
    return 0;
}


int removeHead (list &l, int &x)
{
    node *p;
    if (l.dauDS = NULL)
    {
        p =l.dauDS; 
        x = p->thongtin;
        l.dauDS = l.dauDS->nodenext;
        delete p;
        if (l.dauDS == NULL)
            l.cuoiDS = NULL;
        return 1;
    }
    return 0;
}
int removeX ( list &l, int x)
{
    node *p,*q = NULL;
     p = l.dauDS;
    while ((p != NULL) && p->thongtin != x)
    {
        q = p;
        p = p->nodenext;
    } 
    if (p == NULL )
        return 0;
    if ( q != NULL) 
        removeAfterQ(l,q,x);
    else 
        removeHead(l,x);
    return 1;

}
int main()
{
    cout << "\nTuanKhoi\n";

    list SN;
    // int n = 99;
    // cout << taonode(n);

    // NhapVaXuatDS();

    NhapVaDS(SN);

    removeX(SN, 5);

    XuatDS(SN);    
}