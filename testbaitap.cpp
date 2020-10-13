#include <iostream>
using namespace std;
long USCLN(int a, int b){
    // if ( a * b == 0)
    //     return a + b;
    // if (a > b)
    //     return USCLN(a % b, b);
    // return USCLN(a, b % a);

     if (b == 0) return a;
    return USCLN(b, a % b);
}

long USCNN(int a, int b){
    
}


int main()
{
    int a, b;
    cout << "nhap a: "; cin >> a;
    cout << "nhap b:"; cin >> b;

    cout << USCLN(a,b);
    system("pause");
 }

