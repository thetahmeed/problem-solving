#include <iostream>

using namespace std;

int main()
{
    int numberOfWorkers, salaryPerHour;
    double workedHours, salary;

    cin >> numberOfWorkers >> salaryPerHour >> workedHours;

    cout << "NUMBER = " << numberOfWorkers << endl;

    salary = salaryPerHour * workedHours;
    cout.precision(2);
    cout << fixed;

    cout << "SALARY = U$ " << salary << endl;

    return 0;
}