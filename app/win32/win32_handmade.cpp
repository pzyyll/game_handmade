// win32_handmade.cpp
// @author caizhili
// @date 2019-06-03
// @email pzyyll@gmail.com
// @brief 

#include <windows.h>

int CALLBACK WinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR lpCmdLine,
                     int nShowCmd) 
{
    MessageBox(0, "Show", "What?", MB_OK | MB_ICONINFORMATION);
    return 0;
}