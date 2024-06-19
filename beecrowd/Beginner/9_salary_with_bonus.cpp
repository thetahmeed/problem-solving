#include <iostream>

using namespace std;

int main()
{
    string name;        // string is a class in C++ that represents a sequence of characters
    getline(cin, name); // getline is a function in C++ that reads a line from the input stream

    double salary, sales, bonus;

    cin >> salary >> sales;

    bonus = sales * 0.15; // 15% of sales

    cout.precision(2); // set the precision of the output to 2 decimal places
    cout << fixed;     // set the output to fixed-point notation

    cout << "TOTAL = R$ " << fixed << salary + bonus << endl;
}