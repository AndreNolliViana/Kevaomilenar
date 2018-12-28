#include <iostream>

using namespace std;

 int compat (int a, int b, int c)
 {
     int m;
    if ( a < b && a < c){
        m = a;
        if(b%m == 0 && c%m == 0)
            return 1;
        else
            return 0;    }

    else if ( b < a && b < c){
        m = b;
        if ( a%m == 0 && c%m == 0)
            return 1;
        else
            return 0;         }

    else               {
        m = c;
        if (a%m == 0 && b%m == 0)
            return 1;
        else
            return 0;   }
 }

int main()
{
    int a, b, c, f;
    cout << "Digite tres numeros: ";
    cin >> a >> b >> c;

    f = compat(a, b, c);

    if (f == 1)
        cout << "Sao compativeis";
    else
        cout << "Nao sao compativeis";

    return 0;
}
