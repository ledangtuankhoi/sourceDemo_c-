// #include <iostream>
// #include <stdlib.h>
// using namespace std;

// int main(void)
// {
//      system ("CLS");
//      cout << "\tHi, there!\n\n";
//      cout << "\nComputers are";
//      cout << "great!\n";
//      return 0;
// }

#include <Windows.h>
#include <iostream>
// #include >

void drawRect(){
    HDC screenDC = GetDC(0);
    Rectangle(screenDC, 200, 200, 300, 300);
    ReleaseDC(0, screenDC);
}
int main(void){
    char c;
    std::cin >> c;
    if (c == 'd') drawRect();
    std::cin >> c;
    return 0;
    // ScreenOff(continue);
    
}
