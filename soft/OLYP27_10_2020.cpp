#include <iostream>
#include <math.h>
using namespace std;
#define max 100;
 
// void TongKhongToanTo() //tong cac so nguyen kkhoong cung nhau trong mang
// {
//     int n = 9;
//     int a[n] = { 7,8, 9,5,5,5,3,2,6};
//     int sum = 0;
//     int b[n]= {0};
//     for (int i = 0; i < n; i++)
//     {
//         b[a[i]] = 1 ;
//     }
//     for  (int i = 0; i < n; i++)
//     {
//         if (b[i] > 0)  
//         sum +=i;
//     }
//     xuatmang(n,b);
// }
//
// void sodoixung_nguyento()
// {
//     //
//
// }
//void bonsau() //vua ga vua cho ba sau chan mot tram con 
//vừa gà vừa chó bó lại cho tròn đúng ba sau con mà mà một trăm chân
//{
//    for (int gaf = 2 ; ;gaf+= 2 )
//    {
//        congaf ++;
//        for (int chos = 4 ;; chos += 4)
//        {
//            if ()
//        }
//    }
//    
//    int ga, cho;
//    for (ga = 0; ga < 36; ga++)
//    [
//        cho = 36 - ga;
//        if (ga*2)
//    ]
//}
//void mothaisau(int n){
//	// nhap so nguyen n phan tich ra thua so nguyen to
//	//1350 = 2 * 3*3 * 5*2
//	int kq =0; 
//	for (int i = 3; i < n%2 ==0; i++)//soo nguyen to
//	{
//		if (songuyento(i) == 0)
//		{
//			while(n > 0)
//			{
//				n = n / i;
//				cout << i << "\t";		
//			}
//		}
//	}
//}
void xuatmang(int &n, int a[])
 {
     cout <<endl;
     for (int i = 0; i < n; i++)
     {
         cout << "\t" << a[i];
     }
 }
 
void TongKhongCungNhau()
{

	int sum = 0,n = 10;
	int b[n] = {0},a[n] = {9,6,3,6,4,5,5,4,6,1}; // 13
	for (int i = 1; i <=n; i++)
	{
		b[a[i]] ++;
	}
    // xuatmang(n,b);
	for (int i = 1; i <= n; i++)
	{
		if (b[i] == 1)
            sum = sum + i;
        // cout << sum <<"  ";
	}
	// xuatmang(n,b);
	cout << "\n\tTongKhongCungNhau " << sum <<endl;
}

void SNT_SoDoiXung()
{
    int n = 121, reN = 0, dem = 0;
    //SNT
    if (n < 2)
        return;
    int temp = n;
    for (int i = 2; i < sqrt(n); i++)
    {
    
        if (temp % i == 0)
            dem++;
    }
    if (dem != 0)
        return ;
    // cout <<"\n\t" << n << " SNT";
    //sodooixung
    
    int i;
    for (i = n; n != 0; n /= 10)
    {
        int r = n % 10;
        reN = reN * 10 + r;
        // cout << reN;
    }
    if (i != reN)
        return;
        // cout << reN;
    cout <<"\n\t" << reN << " SNT_SoDoiXung";
    
}
void Cho_ga_30con_100Chan ()
{
    int gaf = 0, cho = 0;
    for (gaf = 1; gaf < 36; gaf++)
    {
        cho = 36 - gaf;
        if ((gaf * 2 + cho * 4) == 100)
            cout << "gaf cho " << gaf << "  "<< cho;
    }
}
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

void PhanTichThuaSoNgTo()
{
    for (int i = 2; n != 0; n)
    
}
int main()
{   
 
    // TongKhongCungNhau();
    // SNT_SoDoiXung();
	// Cho_ga_30con_100Chan();
    
}









