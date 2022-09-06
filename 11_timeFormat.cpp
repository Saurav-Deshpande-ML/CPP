#include <iostream>

using namespace std;

class TimeFormat
{

    int hour, minutes, seconds;

public:
    TimeFormat()
    {
        cout << "Enter time in Seconds: ";
        cin >> seconds;
    }

    void timeFormat();
    void displayTime();
};

void TimeFormat ::timeFormat()
{

    hour = seconds / 3600;
    seconds = seconds % 3600;
    minutes = seconds / 60;
    seconds = seconds % 60;
}

void TimeFormat ::displayTime()
{

    cout << "\n";
    cout << "Time in HH:MM:SS is " << hour << ":" << minutes << ":" << seconds << endl;
}

int main()
{

    TimeFormat time;
    time.timeFormat();
    time.displayTime();
}
