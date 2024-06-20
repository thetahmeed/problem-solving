#include <iostream>

using namespace std;

int main()
{
    int time, speed;  // Time and speed
    double fuelSpent; // Fuel spent

    cin >> time >> speed;

    cout.precision(3);

    // Fuel spent = Time * Speed / 12 (km/l)
    fuelSpent = time * speed / 12.0;

    cout << fixed << fuelSpent << endl;

    return 0;
}