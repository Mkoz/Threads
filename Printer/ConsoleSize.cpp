#include "ConsoleSize.hpp"
#include <windows.h>


void console_size::init() {
#ifdef WIN32
    #include <windows.h>
    HWND hWnd = GetConsoleWindow();
    RECT rc;
    GetClientRect(hWnd,&rc);
    _H=rc.bottom;
    _W=rc.right;
#else
    _H=10;
    _W=64;
#endif
};