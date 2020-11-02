#include<iostream>

using namespace std;

void input_func(int A[], int &n) {
	cout << "nhap so phan tu cua mang n:";
	cin >> n;
	for (int i = 0; i<n; i++) {
		cout << "phan tu A[" << i << "]" << "=";
		cin >> A[i];
	}
}
void output_func(int A[], int &n) {
    cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}
}
void InsertSort(int A[], int n)
{
	int t, j, dem;
	for (int i = 1; i<n; i++)
	{
		j = i - 1;
		t = A[i];
		while (t<A[j] && j >= 0)
		{
            dem++;
			A[j + 1] = A[j];
			j--;
            output_func(A,n);
            cout <<"     " << i  <<"\t" << j  <<"\t" << A[j]  <<"\t" << t  <<"\t" << dem;
		}
		A[j + 1] = t;
	}
}


void demonISS(int A[], int n)
{
    int i, j, temp, dem = 0;
    for (i = 1; i < n; i++)
    {
        j = i - 1;
        temp = A[i];
        while (temp < A[j] && j >= 0)
        {
            dem++;
            A[j + 1] == A[j];
            j--;
            output_func(A,n);
            cout <<"     " << i  <<"\t" << j  <<"\t" << A[j]  <<"\t" << temp  <<"\t" << dem;
        }
        A[j + 1] = temp;
    }
}

int main() {
	int A[10] = {12, 43,54,13,65,34,876,47,35,1}, n = 10;
	// input_func(A, n);
	cout << "mang ban dau la:";
	output_func(A, n);
	// InsertSort(A, n);
    demonISS(A, n);
	// cout <<endl << "mang khi sap xep la:" << endl;
	output_func(A, n);

	// cin.get();
	// getchar();
    system("pause");
	return 0;
}