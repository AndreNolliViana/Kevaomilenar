#include <iostream>

using namespace std;

float calcval (float s, float e, int m, float &cm)
{
 float v;

 v = (s*e)/700;

 if(s>2500.00){
    v = v -((v*10)/100); }
 else if (m>3) {
    v = v - ((v*8)/100); }

    cm = v/m;
    return v;
}

int main()
{
    float s, e, m, cm, f, n;


    cout << "Salario: "; cin >> s;
    cout << "Energia gasta: "; cin >> e;
    cout << "Nro de moradores: "; cin >> m;

    f = calcval(s, e, m, cm);

    cout << "Valor a ser pago: " << f << endl;
    cout << "Custo por morador: " << cm << endl;
    cout << "Digite 0 p/ encerrar ou 1 p/ continuar" << endl;
    cin >> n;

    while (n==1){
        cout << "Salario: "; cin >> s;
        cout << "Energia gasta: "; cin >> e;
        cout << "Nro de moradores: "; cin >> m;
        f = calcval(s, e, m, cm);
        cout << "Valor a ser pago: " << f << endl;
        cout << "Custo por morador: " << cm << endl;
        cout << "Digite 0 p/ encerrar ou 1 p/ continuar" << endl;
        cin >> n;
    }
    return 0;
}
