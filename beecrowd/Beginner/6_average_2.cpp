#include <iostream>

using namespace std;

int main()
{
    double A, B, C, MEDIA; // input1, input2, input3, average
    cin >> A >> B >> C;
    MEDIA = (A * 2 + B * 3 + C * 5) / 10;         // calculate average, (15 = 2 + 3 + 5)
    cout.precision(1);                            // set precision to 5 decimal places
    cout << "MEDIA = " << fixed << MEDIA << endl; // fixed is used to set precision to 5 decimal places
    return 0;
}