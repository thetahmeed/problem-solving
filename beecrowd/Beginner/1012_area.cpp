#include <iostream>

using namespace std;

int main()
{
    double A, B, C, triangle, circle, trapezium, square, rectangle;

    cin >> A >> B >> C;

    triangle = 0.5 * A * C;        // 1/2 * base * height
    circle = 3.14159 * C * C;      // pi * radius^2
    trapezium = 0.5 * (A + B) * C; // 1/2 * (base1 + base2) * height
    square = B * B;                // side^2
    rectangle = A * B;             // length * width

    cout.precision(3);
    cout << fixed;

    cout << "TRIANGULO: " << fixed << triangle << endl;
    cout << "CIRCULO: " << fixed << circle << endl;
    cout << "TRAPEZIO: " << fixed << trapezium << endl;
    cout << "QUADRADO: " << fixed << square << endl;
    cout << "RETANGULO: " << fixed << rectangle << endl;

    return 0;
}