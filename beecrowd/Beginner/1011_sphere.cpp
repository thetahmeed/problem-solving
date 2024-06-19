#include <iostream>

using namespace std;

int main()
{
    double radius, volume;
    double pi = 3.14159;

    cin >> radius;

    volume = (4.0 / 3) * pi * radius * radius * radius;

    cout.precision(3);
    cout << fixed;

    cout << "VOLUME = " << fixed << volume << endl;

    return 0;
}