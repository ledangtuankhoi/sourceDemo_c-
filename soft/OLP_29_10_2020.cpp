#include <iostream>
using namespace std;
#include <math.h>
// void tong3so() //tim so lon nhì 
// {
//     int a, b, c;
//     if ((a - b) * (a -c) <= 0)
//         mind
// }
// void tongphantu() //37 - 
// {
    
// }
// void bo1thanhsonho() // bỏ 1 phần tự thì số đó nhỏ nhất
// {
//     //a[i]> s[i +1] 
//     int n = 7086 a[4] ;
//     for (int i = 1; n != 0; n /10)
//     {
//         a[n - i] = n % 10;
        
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > a[i+1])
//         {
//             max = 
//         }
//     }
    // P@ssword102
// }
// int  nam_nhuan(int n)
// {
//     if (n % 4 == 0)
//         return 1;
//     return 0;
// }
// int  thang_31 (int m, int y)
// {
//     if (m = 2 && nam_nhuan(y) == 1 )
//     {
//         return 1;
//     } else return 0;


//     if (m % 2 != 0)
//         return 1;
//     return 0;



// }
// void tim_ngay_ke_tiep ()
// {
//     int d = 28 , m = 2,y = 2000;
//     // cin >> d >> m >> y;

//     if (nam_nhuan(y) == 0 && thang_31(m) == 1 && day < 31)
//     {
//         d ++;
//         cout <<" \t" << d << " " << m << " "<< y; 
//         return ;
//         if (nam_nhuan(y) == 0 && thang_31(m) == 1 && day == 31)
//     }
//     else {
//         if (nam_nhuan(y) == 0 && thang_31(m) == 1 && day >= 31)
//         {
//             d = 1;
//             m ++;
//         }
//     }

// }
int SNT(int n)
{
    if (n < 2)
        return 1;
    int temp = n, dem = 0;
    for (int i = 2; i < sqrt(n); i++)
    {
    
        if (temp % i == 0)
            dem++;
    }
    if (dem != 0)
        return 0;
    else return 1;
}

int somayman()
{
    int n = 68688;
    int temp = n;
    while (n != 0)
    {
        /* code */
        
        if (n != 6 && n != 8)
            return 0;
        temp = n / 10;
    }
    return 1;
    
}

void  sochanlonhonhailatong2SNT () //188 Phan1_C_Printf_TuHeThongSoDenArray.pdf
{
    //C:\Users\ledan\Pictures\Untitled.png
    int n = 1;
    if (n % 2 !=0 && n < 2)
        return;
    // for (int n = 2; n < 100; n*=2)
    //sdafsdfasdasdfsdf
    // {
    //     for (int i = 2; i < n; i++)
    //     {
    //     if (SNT(n - i) == 1)
    //         cout <<endl << n << "= \t" << n - i <<" + " << n;
    //     }
    // }
    for (int i = 2; i < n; i++)
    {
        if (SNT(n - i) == 1)
            cout <<endl << i << "\t" << n - i << " = " << n;
    }

}
int main()
{
    // cout << thang_31(11);
    // cout << somayman();
    //aasdf
    /asdfsd 
    sochanlonhonhailatong2SNT();
}