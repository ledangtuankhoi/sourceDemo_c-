#include <iostream>
using namespace std;
void InsertionSort(int a[ ], int n)  
{int pos,i,x;  
for(i=1;i<n;i++)    {="" x="a[i];" pos="i-1;" while((pos="">=0)&&(a[pos]>x)) //tìm vị trí chèn a[i]  
 {  
  a[pos+1]=a[pos];  
  pos--;  
 }  
 a[pos+1]=x; //chèn x vào dãy  
 }  
}  
int main()
{
    int i = 0, a[10];
    cout << "hello word!";   
    cout << endl << i;
    InsertionSort(a,10);
    system("pause");
}