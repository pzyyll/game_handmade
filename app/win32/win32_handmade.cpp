// win32_handmade.cpp
// @author caizhili
// @date 2019-06-03
// @email pzyyll@gmail.com
// @brief 

#include <windows.h>
#include "test_src.h"

int CALLBACK WinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR lpCmdLine,
                     int nShowCmd) 
{
	test::P();
    return 0;
}