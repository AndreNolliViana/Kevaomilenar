#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, i, t, mt, ap, bp, ip;
    mt = 100000;
    i = 0;

    cout << "Digite os pares: " ;
    cin >> a >> b;

    while ( a!=0 || b!=0){
            t = abs (a - b);
            i = i + 1;
            if (t < mt){
                mt = t;
                ip = i;
                ap = a;
                bp = b;
    }       cin >> a >> b;
    }
    if ( a == 0 && b == 0){
            cout << "menor diferenca: "<< mt << " - " << ip << "o. par "<< "(" << ap << " " << bp << ")";
    }
    return 0;
}
