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
        tab_line(8, c);
        //8 khoang trang bang 1 tab
    }
     cout << "+";

    for (int a = 0; a < j - i ; a++) 
    {
        char c = '-'; //  gach ngang
        tab_line(8, c);
        //6 khoang trang 4 cua tab va 2 cua danh dau
    }
     cout << "+";
// tao dau gach dung de phan biet
    cout <<"\n\t";
    for (int b = 0; b < i ; b++) 
    {
        char c = ' '; //  khoang trang
        tab_line(8, c);
        //8 khoang trang bang 1 tab
    }
     cout << "|";

    for (int a = 0; a < j - i ; a++) 
    {
        char c = ' '; //  gach ngang
        tab_line(8, c);
        //6 khoang trang 4 cua tab va 2 cua danh dau
    }
     cout << "|";
}


void xuatmang(int a[])
{
    cout << "\n\t";
    for (int i = 0; i < 10; i++)
    {    
        cout  << a[i] << "\t";
    }
}

int hoanvi (int &a, int &b){
    int temp ; 
    temp = a;
    a = b;
    b = temp;
    return 0;
}

void SX_trucTiep (int a[])
{
    int j ,i, dem = 0;
    for (i = 0; i < 10; i++)
    {
        for ( j = i + 1; j < 10; j++)
        {
            if (a[j] < a[i])
            {
                cout  <<"[" << ++dem << "]:";
                ShowLineHV(i,j);
                xuatmang(a);
                hoanvi(a[i], a[j]);
                cout<< endl;
            }       
        }
    }
    cout << "\n -------------------------"<< "hoanvi:" << dem;
    cout << "\n\t mang cuoi cung\n";
    xuatmang(a);
}
/*
khối lệnh interchangeSoft_ChanTang_LeGiam là sắp xếp 
    - chẳn đầu mảng tăng dần,
    - lẻ cuối mảng giảm dần
 input =       70      95      26      67      87      23      66      16      54      42
 output =      16      26      42      54      66      70      95      87      67      23
               |--------------Chan----------------------|      |-------le---------------|
*/
void interchangeSoft_ChanTang_LeGiam(int n, int a[]){
    for (int i = 0; i < n; i ++){
        for (int j = i + 1; j < n; j ++){
            if ((a[j] % 2 == 0 && a[i] % 2 != 0) 

            || (a[j] % 2 != 0 && a[i] % 2 != 0 && a[j] > a[i])

            || (a[i] % 2 == 0 && a[j] % 2 == 0 && a[i] > a[j]))
                hoanvi(a[i], a[j]);
        }
    }
}
int main()
{
    int a[10] = {70, 95 , 26, 68, 87, 56, 66, 16, 54, 42};
    char HV[2][10];
    cout << "\n hello cac ban";
    xuatmang(a);
    cout << "\n ========================== \n";
    SX_trucTiep(a);
    // xuatmang(a);
    system("pause");
}