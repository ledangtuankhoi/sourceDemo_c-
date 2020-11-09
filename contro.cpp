#include <iostream>
using namespace std;

int *findMax (int arr[], int n)
{
    int *max = arr;
    int i;

    for (i = 1; i <= n; i++)
    {
        if (*max < *(max + i))
            *max = *(max + i);
    }
    return max;
}
void bai2 ()
{
    int a[5];
    int *p = a;
    // cout << "nhap: "; 
    // cin >> *p >> *(p + 1) >> *(p + 2) >> *(p + 3) >> *(p + 4) >> *(p + 5);
    *p = 3;
    *(p + 1) = 4;
    *(p + 2) = 2;
    *(p + 3) = 5;
    *(p + 4) = 8;
    // *(p + 5) = 8;


    for (int i = 4; i >= 0; i--)
    {
        cout << a[i] ;
    }
}

// danh sach lien ket
struct nut{
    int dulieu;
    nut *tieptheo;
};

nut *taonut (int x){
    nut *temp = new nut;
    temp -> tieptheo = NULL;
    temp -> dulieu = x;
    return temp;
}

void indanhsach(nut *l)
{
    nut *p = l;
    while (p != NULL){
        cout << p-> dulieu << " . ";
        p = p -> tieptheo;
    }
}

nut *addElemeent (nut *p, int x){
    nut *temp = taonut(x);  
    p -> tieptheo = temp;
    return temp;
}

int main()
{
    // int n = 3, i, *p;
    // int arr[n] = { 9, 8, 6};
    // p = findMax (arr, n);
    // cout << "gia tri lon nha laf: "<< *p;
    // cout <<endl;
    // bai2();

    int n, x;
    cin >> n;
    cin >> x;

    nut *ds = taonut(x);
    nut *controP = ds;

    for (int  i = 0; i < n; i++)
    {
        cout << "thu " << i;
        cin >> x;
        controP = addElemeent(controP,x);
    }

    indanhsach(ds);
    
    return 0;

}
