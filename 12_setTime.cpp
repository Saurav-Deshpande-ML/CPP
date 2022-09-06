#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void setDateTime(int date, int month, int year, int hour, int min, int sec)
{

    unsigned char buff[50] = {0};
    //snprintf :also check null terminaion
    sprintf((char *)buff, "sudo date -s \"%02d/%02d/%04d %02d:%02d:%02d\"", month, date, year, hour, min, sec);
    system((const char *)buff);

}

int main()
{
    setDateTime(25, 6, 2017, 10, 10, 10);
    cout << endl;
    return 0;
}
