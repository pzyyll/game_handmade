// win32_handmade.cpp
// @author caizhili
// @date 2019-06-03
// @email pzyyll@gmail.com
// @brief 

#include <windows.h>

//typedef struct tagWNDCLASSA {
//    UINT      style;
//    WNDPROC   lpfnWndProc;
//    int       cbClsExtra;
//    int       cbWndExtra;
//    HINSTANCE hInstance;
//    HICON     hIcon;
//    HCURSOR   hCursor;
//    HBRUSH    hbrBackground;
//    LPCSTR    lpszMenuName;
//    LPCSTR    lpszClassName;
//} WNDCLASSA, *PWNDCLASSA, *NPWNDCLASSA, *LPWNDCLASSA;

LRESULT CALLBACK
MainWindowCallback(
    HWND window,
    UINT message,
    WPARAM WParam,
    LPARAM LParam)
{
    LRESULT result = 0;

#if 0
    switch (message) {
        case WM_SIZE: {
            OutputDebugStringA("WM_SIZE\n");
            break;
        } 
        case WM_DESTROY: {
            OutputDebugString("WM_DESTROY\n");
            break;
        } 
        case WM_CLOSE: {
            OutputDebugString("WM_CLOSE\n");
            break;
        } 
        case WM_ACTIVATEAPP: {
            OutputDebugString("WM_ACTIVATEAPP\n");
            break;
        } 
        default: {
            result = -1;
            break;
        } 
#endif 

    return result;
}

int CALLBACK WinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR lpCmdLine,
                     int nShowCmd) 
{
    WNDCLASSA window_class = {};

    window_class.style = CS_OWNDC | CS_HREDRAW | CS_VREDRAW;
    window_class.lpfnWndProc = MainWindowCallback;
    window_class.hInstance = Instance;
    window_class.lpszClassName = "HandmadeHeroWindowClass";

    return 0;
}