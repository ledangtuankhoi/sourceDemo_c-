#include <iostream>
#include <random>
#include <ctime>
#include <conio.h>
#include <windows.h>

#define max 10
const int width = 10;
const int height = 10;

int X_old = 0, Y_old = 0, x = 0 ;
int X_now = (rand() % (1 - (-1) + 1) + (-1));
int  Y_now = (rand() % (1 - (-1) + 1) + (-1));

using namespace std;



void out2array(string becas[max][max])
{
    cout << endl;
    for (int i = 0; i < max; i ++)
    {
        for (int j = 0; j < max; j++)
        {
            cout << "   " << becas[i][j];
        }
        cout << endl;
    }
}
void out1array(int b[1000])
{
    int i = 0;
    while (b[i] == 0)
    {
        /* code */
        cout << b[i];
        i ++;
    }
    
}

string conca1 (int n)
{
    char a[4] = {"<"};
    char c[4] = "o<" ;
    int j = 0;
    a[1] = (int)n;
    for (int i = 2; i < 4; i++)
    {
        a[i] = c[j];
        j++;
    } 
    return a;
}


string conca2 (int n)
{
    char a[4] = {">o"};
    char c[4] = ">" ;
    int j = 0;
    a[3] = (int)n;
    for (int i = 2; i < 4; i++)
    {
        a[i] = c[j];
        j++;
    } 
    return a;
}
void fish (string becas[height][width], char n) // ca thu n
{


    system ("CLS");

    do{
        if (X_now < 0 || Y_now < 0 )
        {
            X_now += 2;
            Y_now += 2;
        }
        if (X_now >= max || Y_now >= max)
        {
            X_now -= 2;
            Y_now -= 2;
        }
        X_now += (rand() % (1 - (-1) + 1) + (-1));
        Y_now += (rand() % (1 - (-1) + 1) + (-1));
    } while (X_now < 0 || Y_now < 0 || X_now >= max || Y_now >= max);
    
    if (Y_now < Y_old || X_now < Y_old )
        becas[X_now][Y_now ] = "<2o<";
    
    if (Y_now > Y_old || X_now > Y_old )
        becas[X_now][Y_now ] = ">O2>";
    
    X_old = X_now;
    Y_old = Y_now;

    // out2array(becas);
    // Sleep(700);
    // becas[X_now ][Y_now ] = " ";
}


int main()
{
    int b[1000];
    srand(time(NULL)); 
    string becas[max][max] = {" "};


    while (true)
    {
        fish(becas,2);
        // Sleep(700);
        out2array(becas);
        Sleep(700);
        becas[X_now ][Y_now ] = " ";
    }

    // cout << conca1(2);
    // cout << conca2(2);


}
