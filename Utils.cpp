#include "Utils.h"
#include <unistd.h>
#include <cstdlib>
#include <ctime>

#define WINDOWS

#ifdef WINDOWS
    #include<windows.h>
#endif // WINDOWS

Utils utils;

Utils::Utils()
{
    srand(time(NULL));
}



void Utils::sleep(uint32_t sec)
{
    #ifdef WINDOWS
    Sleep(1000*sec);
    #else
    usleep(1000000*sec);
    #endif // WINDOWS
}

void Utils::clearScreen() {
    #ifdef WINDOWS
    system("cls");
    #else
    system("clear");
    #endif // WINDOWS
}
