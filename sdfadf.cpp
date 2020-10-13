#include <iostream>
#include <math.h>
using namespace std;
///
long USCLN(int a, int b)
{
    if (a==b)
    {    
        return a;
    }
    if (a > b)
        return USCLN(a-b,b);
    return USCLN(a,b-a); 
}
////	
long USCLN2(int a, int b)
{
	if (a * b == 0)
		return a+b;
	if (a > b)
		return USCLN2(a%b, b);
	return USCLN2 (a, b%a);           
}
///
long TongCan(int n)
{
	if (n == 1)
		return 1;
	return sqrt(n + TongCan(n - 1));
}
//////
float TongMauSo(int n)
{
//	if (n == 1  )
//		return 1;
////	return 1/(TongMauSo(2 * n + 1)) +  1/(TongMauSo(2 * n )) +  1/(TongMauSo(2 * n - 1));
//	return 1/(TongMauSo(2 * (n - 1 ) + 1));

	if (n == 0)
		return 1;
//	return TongMauSo((float)1/(2 * (n - 1 ) + 1) + (float)1/(2 * n  + 1);
	return TongMauSo((n - 1) + (float)1/(2 * n  + 1));
}
////
long TongCuaTong(int n)
{
	if (n == 0)
		return 0;
	return TongCuaTong(n - 1) + n;
}
long tongso(int n)
{
	if (n == 1)
		return 1;
	return tongso(n -1) + TongCuaTong(n);
}

long demsoduong(int n) //dem so luong cuar so nguuyen duong n
{
	if (n == 0);
		return 0;
	return demsoduong(n / 10) + 1;
}

long TongcacChuSo(int n) // tong cacs chu so cua so nguyen
{
	if (n == 0)
		return 0;
	return TongcacChuSo(n % 10) + n % 10;
}

long giaithua(int n)
{
	if (n == 0 || n == 1) // cos the chon 1 trong 2
		return 1;
	return n * giaithua(n - 1);
}

long ToHop(int n, int k)
{
	if (n == k || k ==0)
		return 1;
//	if (n > k && n > 0 && k > 0)
	return ToHop(n - 1, k) + ToHop(n - 1, k - 1);
}

void TOH(int num, char x, char y, char z) {
   if (num > 0) {
      TOH(num - 1, x, z, y);
      printf("\n%c -> %c", x, y);
      TOH(num - 1, z, y, x);
   }
}
long mu(int n){
	return n * n;
}
long tongMu(int n){
	if (n == 0)
		return 0;
	return tongMu(n -1) + mu(n);
}
	//(1/2)+(1/4)+(1/8)...(1/2n)

float tong1_2n (int n){
	if (n == 1)
		return 0.5;
	return 1/(2*n) + tong1_2n(n - 1) ;
	/*

	*/
}

//1/(1*2)+1/(2*3)+..+1/((n-1)*n)
float tongnhanmau(int n){
	if (n == 1)
		return 0;
	return (float)1/((n-1)*n) + tongnhanmau(n-1);
}

// (1/2)+(2/3)+(3/4)+..+n/(n+1)
float tong2(int n){
	if (n == 0)
		return 0;
	return (float)n/(n + 1) + tong2((n-1));
}

// 1+(1.2)+(1.2.3)+...+(1.2.3...n)
long nhan(int n ){
	if (n == 1)
		return 1;
	return n * nhan(n-1);
}
long tongnhan(int n){
	if (n == 1)
		return 1;
	return nhan(n) + nhan(n - 1);
}

// (x^1) + (x^2) + (x^3) + .. +(x^n)

long 
 int main()
{
    int a= 0 ,b = 0;
    cout << "nhap a: "; cin >> a;
	// cin >>  b;
	// cout << USCLN(a,b); 
	// cout << USCLN2 (a,b); 
	// cout << (float)TongMauSo(a) << endl;
	// cout << TongCan(a) << endl;
	// cout << (tongso(a)) << endl;
	// cout << (giaithua(a)) << endl;
	// cout << tongMu(a) << endl;
	// cout << (float)tong1_2n(a) << endl;
	// cout << (float)tongnhanmau(a) << endl;
	// cout << (float)tong2(a) << endl;
	cout << tongnhan(a) << endl;



    return 0;
}