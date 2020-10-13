#include <iostream>
using namespace std;

void tab_line (int n, char c)
{
    for (int i = 1; i <= n; i++)
    {
        cout << c;
    }
    
}
void ShowLineHV (int i , int j)
{
    cout <<"\t";
    for (int b = 0; b < i ; b++) 
    {
        char c = ' '; //  khoang trang
        tab_line(4, c);
        //4 khoang trang bang 1 tab
    }
     cout << "+";

    for (int a = 0; a < j - i ; a++) 
    {
        char c = '-'; //  gach ngang
        tab_line(4, c);
        //6 khoang trang 4 cua tab va 2 cua danh dau
    }
     cout << "+";
// tao dau gach dung de phan biet
    cout <<"\n\t";
    for (int b = 0; b < i ; b++) 
    {
        char c = ' '; //  khoang trang
        tab_line(4, c);
        //4 khoang trang
    }
     cout << "|";

    for (int a = 0; a < j - i ; a++) 
    {
        char c = ' '; //  gach ngang
        tab_line(4, c);
        //6 khoang trang 4 cua tab va 2 cua danh dau
    }
     cout << "|";
}
void doi_cho (int &a, int &b){
    int temp = 0; 
    temp = a;
    a = b;
    b = temp;
}
void xuatmang(int a[])
{
    cout << "\n\t";
    for (int i = 0; i < 10; i++)
    {
        cout  << a[i] << "  ";
    }
}

void Chon_TrucTiep (int a[])
{
    int j ,i, min, dem = 0 ;
    for (i = 0; i < 10 ; i++)
    {
        cout  <<"\n[" << ++dem << "]:";
        min = i;
        for ( j = i + 1 ; j < 10 ; j++)
        {
            if (a[j] < a[min]){
                min = j;
                // ShowLineHV(i,j);
            }
        }
        ShowLineHV(i,min);
        xuatmang(a);
        doi_cho(a[min], a[i]);

        
    }
    cout << "\n -------------------------"<< "hoanvi:" << dem;
    cout << "\n\t mang cuoi cung\n";
    xuatmang(a);
}
 

int main()
{
    int a[10] = {44, 95 , 26, 64, 47, 56, 66, 16, 54, 42};
    cout << "\n hello cac ban";
    xuatmang(a);
    cout << "\n -------------------------";
    Chon_TrucTiep(a);
}