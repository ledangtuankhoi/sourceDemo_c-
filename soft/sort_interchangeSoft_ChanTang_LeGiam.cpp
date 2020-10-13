#include <iostream>
using namespace std;
//--------------------------------------------------------------------
int hoanvi (int &a, int &b){
    int temp ; 
    temp = a;
    a = b;
    b = temp;
    return 0;
}
void xuatmang(int a[])
{
    cout << "\n\n\t";
    for (int i = 0; i < 10; i++)
    {    
        cout  << a[i] << "  ";
    }
}
void interchangeSoft_ChanTang_LeGiam(int n, int a[]){
    for (int i = 0; i < n; i ++){
        for (int j = i + 1; j < n; j ++){
            if ((a[j] % 2 == 0 && a[i] % 2 != 0) 

            || (a[j] % 2 != 0 && a[i] % 2 != 0 && a[j] > a[i])

            || (a[i] % 2 == 0 && a[j] % 2 == 0 && a[i] > a[j]))
                hoanvi(a[i], a[j]);
                //xuatmang(a);
        }
    }
}
int main()
{
    int a[10] = { 70, 95, 26, 67, 87, 23, 66, 16, 54, 42};
    //            16, 26, 42, 54, 66, 68, 70, 95, 87,
    int n = 10;
    xuatmang(a);
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "--------";
    }
    interchangeSoft_ChanTang_LeGiam(n, a);
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "--------";
    }
    xuatmang(a);
}