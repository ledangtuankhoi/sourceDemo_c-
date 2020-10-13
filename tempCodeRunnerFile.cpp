
#include<stdio.h>
#include<conio.h>
int Mang[10]={70, 95 , 26, 68, 87, 56, 66, 16, 54, 42};
int X;
void doicho(int &a, int &b){
    int
    tam=a;
    a=b;
    b=tam;
}
void SelectionSort(int mang[],int n)
{ 
	int i,j,tam;
	for(i=0;i<n;i++)
	{
		int min=i;
		for(j=i+1;j<n;j++)
			if(mang[j]<mang[min]) min=j;
		doicho(mang[min], mang[i]);
	}
}
void inday(int mang[],int n)
{ 
	int vt;
	for(vt=0;vt<n;vt++)
	printf("%d ",mang[vt]);
}
int main()
{
	// clrscr();
    // class();
	printf("Day truoc khi sap xep\n");
	inday(Mang,10);
	SelectionSort(Mang,10);
	printf("\nDay sau khi sap xep\n");
	inday(Mang,10);
	getch();
}