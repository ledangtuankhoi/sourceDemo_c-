#include <iostream>
using namespace std;

void doicho(int &a, int &b)
{
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
}
void xuatmang(int a[])
{
    cout << endl << "\t";
    for (int i = 0; i < 10; i++)
        cout << a[i] << "  ";
}

void tab_line (int n, char c)
{
    for (int i = 1; i <= n; i++)
    {
        cout << c;
    }
    
}

void ShowLineHV (int i )
{
    cout <<"\t";
    for (int b = 0; b <i ; b++) 
    {
        char c = ' '; //  khoang trang
        tab_line(4, c);
        //8 khoang trang bang 1 tab
    }

    //ham tao khoang trang
     cout << "+";
    char c = '-'; //  tao dau gach 
     tab_line(4, c);
     cout << "+";

}

void bublle_soft(int a[])
{
    int i, j, dem = 0, d = 0; // bien d de khoang trang
    for ( j = 0; j < 10; j ++)
    {
        // cout << "\n[" << ++dem << "]";
        for ( i = 9 ; i > 0; i--)
        {
            if (a[i] < a[i - 1])
            {   
                // ShowLineHV(i);
                xuatmang(a);
                
                doicho(a[i], a[i - 1]);  
            }     
        }
        
    }

    cout << "\n -------------------------"<< "doicho:" << dem;
    cout << "\n\t mang cuoi cung\n";
    xuatmang(a);
}
/*
khối lệnh bubllueSoft_ChanTang_LeGiam là sắp xếp 
    - chẳn đầu mảng tăng dần,
    - lẻ cuối mảng giảm dần
 input =       70      95      26      67      87      23      66      16      54      42
 output =      16      26      42      54      66      70      95      87      67      23
               |--------------Chan----------------------|      |-------le---------------|
*/
void bubllueSoft_ChanTang_LeGiam(int n, int a[]){
    for (int i = 0; i < n; i ++){
        for (int j = n - 1; j > i; j --){
            if ((a[j] % 2 == 0 && a[j - 1] % 2 != 0)
            || (a[j] % 2 == 0 && a[j - 1] % 2 == 0 && a[j] < a[j - 1])
            || (a[j] % 2 != 0 && a[j - 1] % 2 != 0 && a[j] > a[j - 1]))
                doicho(a[j], a[j - 1]);
        }
    }
}
int main()
{
    int a[10] = {70, 95 , 26, 68, 87, 56, 66, 16, 54, 42};
    xuatmang(a);
    cout << "\n--------------------------";
    bublle_soft(a);
}