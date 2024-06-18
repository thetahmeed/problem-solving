#include <iostream>

using namespace std;

int main()
{
    int A, B, C, D, difference; // Declare variables A, B, C, D, and difference
    cin >> A >> B >> C >> D;    // Read input from the user

    difference = (A * B - C * D);                 // Calculate the difference
    cout << "DIFERENCA = " << difference << endl; // Output the difference
    return 0;
}