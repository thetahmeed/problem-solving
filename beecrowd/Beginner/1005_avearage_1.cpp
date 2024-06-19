#include <iostream>

using namespace std;

int main()
{
    double A, B, MEDIA; // input1, input2, average
    cin >> A >> B;
    MEDIA = (A * 3.5 + B * 7.5) / 11;             // calculate average, (11 = 3.5 + 7.5)
    cout.precision(5);                            // set precision to 5 decimal places
    cout << "MEDIA = " << fixed << MEDIA << endl; // fixed is used to set precision to 5 decimal places
    return 0;
}