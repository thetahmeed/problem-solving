#include <iostream>

using namespace std;

int main()
{
    int codeOfProdut1, numberOfUnits1, codeOfProdut2, numberOfUnits2;
    double priceOfUnit1, priceOfUnit2, total;

    cin >> codeOfProdut1 >> numberOfUnits1 >> priceOfUnit1;

    cin >> codeOfProdut2 >> numberOfUnits2 >> priceOfUnit2;

    total = numberOfUnits1 * priceOfUnit1 + numberOfUnits2 * priceOfUnit2;

    cout.precision(2);
    cout << fixed;

    cout << "VALOR A PAGAR: R$ " << fixed << total << endl;
    return 0;
}