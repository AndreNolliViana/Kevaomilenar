#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c;
    float delta;
    float x1;
    float x2;

    cout << "Insira os valores de a, b, c, com equacao de forma ax^2+bx+c" << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    delta= b*b - 4*a*c;
    x1 = (-b+sqrt (delta))/(2*a);
    x2 = (-b-sqrt (delta))/(2*a);

    if ( delta > 0 )
        cout << "As raizes reais sao: " << x1 << " e " << x2 << endl;
    else if (delta == 0 )
             cout << "As raiz sera: " << x2 << endl; // poderia ser colocado o x1 também.
    if (delta < 0 )
        cout << "A equacao nao possui raizes reais." << endl;
    return 0;
}
