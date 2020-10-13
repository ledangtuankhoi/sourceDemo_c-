#include <iostream>
#include <ctime>
using namespace std;
struct date
{
    int ngay = 0;
    int thang = 0;
    int nam = 0;
};
struct Str_sv
{
    int ma = 0;
    string ten = "";
    date ngsinh;
    float dtb = 0;
};
void In_info_sv(Str_sv &sv)
{
    
    do
    {
        //sv.ma = 0;
        cout << "ma"; cin >> sv.ma;
    } while (sv.ma != (int)sv.ma);
    
    
    do
    {
        sv.ten = "";
        cout << "ten: "; cin >> sv.ten;
    } while (sv.ten != (string)sv.ten && sv.ten.length() > 5);
    
// kiemr tra thoi gian sinh dung
    // do
    // {
    //     cout << "ngay sinh: "; cin >> sv.ngsinh.ngay;
    // } while (sv.ngsinh.ngay < 1 || sv.ngsinh.ngay > 31);
    
    // do
    // {
    //     cout << "ngay sinh: "; cin >> sv.ngsinh.thang;
    // } while (sv.ngsinh.thang < 1 || sv.ngsinh.thang > 12);
    
    // do
    // {
    //     cout << "ngay sinh: "; cin >> sv.ngsinh.nam;
    // } while (sv.ngsinh.nam < 1 || sv.ngsinh.nam >  2020);
 //kiem tra dieu kien dung DIEM
    do
    {
        cout << "DTB: "; cin >> sv.dtb; 
    } while (sv.dtb < 0 || sv.dtb > 10);
    
}
void In_sv( int n)
{
    Str_sv ds[100];
    for (int i = 0; i < n; i++)
    {
        cout << "sinh vien thu [" << i+1 <<"]";
        In_info_sv(ds[i]);
    }
}

void Out_info_sv(Str_sv &sv)
{
    cout << "\tma:" << sv.ma;
    cout << "\tten: " << sv.ten;
    cout << "\tngaay sinh: " << sv.ngsinh.ngay << " - " << sv.ngsinh.thang << " - " << sv.ngsinh.nam;
    cout << "\tDTM: " << sv.dtb;
}
void Out_sv(int n)
{
    Str_sv ds[100];
    for (int i = 0; i < n; i++)
    {
        cout << "sinh vien thu [" << i+1 <<"]";
        Out_info_sv(ds[i]);
    }
}
int main()
{
    int n;
    
   

    cout << "hello word!";
    cout << "nhap so luong sinh vien:"; cin >> n;
    In_sv(n);
    Out_sv(n);

    return 0;
    system("pause");

}