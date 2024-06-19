#include <iostream>

using namespace std;

int main()
{
    int A, B, C, greatest;

    cin >> A >> B >> C;

    // The greatest number between A and B is calculated first
    greatest = (A + B + abs(A - B)) / 2;

    // The greatest number between the greatest number and C is calculated
    greatest = (greatest + C + abs(greatest - C)) / 2;

    cout << greatest << " eh o maior" << endl;

    return 0;
}