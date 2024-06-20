#include <iostream>

using namespace std;

int main()
{
    int X;    // Distance
    double Y; // Fuel spent

    cin >> X >> Y;

    cout.precision(3);

    cout << fixed << X / Y << " km/l" << endl; // Consumption
    return 0;
}