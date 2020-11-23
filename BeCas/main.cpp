#include <iostream>
#include <random>
#include <ctime>
#include <conio.h>
#include <windows.h>
// # include <bits/c++0x_warning.h>
#define max 10
// #define becas[max]
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

void ca ()
{
    
}

void fish(string becas[max][max], int n, int b[1000])
{
    int X_now = (rand() % (1 - (-1) + 1) + (-1));
    int  Y_now = (rand() % (1 - (-1) + 1) + (-1));
    int X_old = 0, Y_old = 0, x = 0 ;
    char key;

    while (true)
    {

        b[x] = X_now*10 + Y_now;
        x++;
        if(kbhit()){
            key = getch();
            if(key == 27 ){
                break;
            }
        }

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
        // becas[X_now][Y_now ] = "<2o<";

        out2array(becas);
        X_old = X_now;
        Y_old = Y_now;

        Sleep(500);
        becas[X_now ][Y_now ] = " ";
        out1array(b);
        system ("CLS");

    }
    
    
}
int main()
{
    int b[1000];
    // b[1000] = new int[1000];
    srand(time(NULL)); 

    string becas[max][max] = {" "};
    fish(becas,2,b);
    // fish(becas,2,b);
    out1array(b);

}
