// SleepDetours.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>

int main()
{
    std::cout << "Calling Sleep Fn !\n";
    Sleep(DWORD(2000));
    std::cout << "Done with Sleep Fn !\n";
    getchar();
}