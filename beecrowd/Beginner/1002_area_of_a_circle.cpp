#include <iostream>

using namespace std;

int main()
{
    double pi = 3.14159, R, A; // pi, radius, area
    cin >> R;
    A = pi * R * R;

    cout.precision(4);                  // set precision to 4 decimal places
    cout << "A=" << fixed << A << endl; // fixed is used to set precision to 4 decimal places

    return 0;
}