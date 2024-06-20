#include <iostream>
#include <cmath> // for sqrt, pow

using namespace std;

int main()
{
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    cout.precision(4);

    // Distance between two points // sqrt((x2 - x1)^2 + (y2 - y1)^2)
    cout << fixed << sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) << endl;

    return 0;
}