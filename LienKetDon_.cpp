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
    diem ->thongtin = x;
    diem -> nodenext = NULL;
    return diem;
}

void taoDS (list &list)
{
    list.dauDS = NULL;
    list.cuoiDS = NULL;
}

void themnodevaoDS (list &list, node *diem)
{
    if (list.dauDS == NULL)
    {
        list.dauDS = diem;
        list.cuoiDS = NULL;
    }
    else 
    {
        diem -> nodenext = list.dauDS;
        list.dauDS = diem;
    }
}


int main()
{
    cout << "\nTuanKhoi\n";

    int n = 99;
    cout << taonode(n);
    
}