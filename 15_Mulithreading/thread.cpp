#include <iostream>
#include <thread>

using namespace std;
using namespace std::chrono;

typedef long long ll;

void oddSum(ll start, ll end)
{
    ll oddSum = 0;
    for (ll i = start; i <= end; i++)
    {
        if (i % 2 != 0)
            oddSum += i;
    }
    cout << "ODD SUM: " << oddSum << endl;
}
void evenSum(ll start, ll end)
{
    ll evenSum = 0;
    for (ll i = start; i <= end; i++)
    {
        if (i % 2 == 0)
            evenSum += i;
    }
    cout << "EVEN SUM: " << evenSum << endl;
}

int main()
{

    auto startTime = high_resolution_clock ::now();
    // oddSum(0,1900000000);
    // evenSum(0,1900000000);
    thread t1(oddSum, 0, 1900000000);
    thread t2(evenSum, 0, 1900000000);
    t1.join();
    t2.join();
    auto stopTime = high_resolution_clock ::now();
    auto duration = duration_cast<microseconds>(stopTime - startTime);
    cout << duration.count() / 1000000 << endl;
}
