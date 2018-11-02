#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |
            FOREGROUND_BLUE);
 cout<<"Hello"<<endl;
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |
            FOREGROUND_RED);
 cout<<"World"<<endl;
 return 0;
}