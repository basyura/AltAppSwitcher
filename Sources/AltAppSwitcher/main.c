#include "App.h"
#include <windows.h>
#include <io.h>
#include <fcntl.h>
#include <stdio.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR pCmdLine, int nCmdShow)
{
    (void)hPrevInstance; (void)nCmdShow; (void)pCmdLine;
    
    
    return StartAltAppSwitcher(hInstance);
}
