void drawRect(){
    HDC screenDC = ::GetDC(0);
    ::Rectangle(screenDC, 200, 200, 300, 300);
::ReleaseDC(0, screenDC);