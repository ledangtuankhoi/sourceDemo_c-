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
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        a[i] = rand() % 100;
    }
    list SN; // so guyen
    node *temp;
    for (int i = 0; i < 5; i++)
    {
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
int main()
{
    cout << "\nTuanKhoi\n";

    // int n = 99;
    // cout << taonode(n);

    NhapVaXuatDS();
    
}