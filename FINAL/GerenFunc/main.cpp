#include <iostream>

using namespace std;

int main()
{
    int e;
    int s, m,p;
    int f,F,g,G;
    cout << "Salario: "; cin >> s;
    cout << "Cargo: "; cin >> e;
    if (e == f || e == F){
        p = s = s - (s*0.1);
        cout << "Salario pago: " << p;
    }
    else (e == g || e == G); {
        cout << "Qnts meses: "; cin >> m;
        if (m > 12){
                p = s = s - (s*0.3);
            cout << "Salario pago: " << p;
        }
        else
        p = s = s - (s*0.25);
            cout << "Salario pago: " << p;
            }

    return 0;
}
