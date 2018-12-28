#include <iostream>

using namespace std;

int mult_soma(int x)
{
    int m, m1,s;
    s = 0;
    m = x*37;

    while (m >= 1){
        s = s + m%10;
        m = m/10;}

    return s;
}

int main()
{
    int x, r;

    cout << "Informe um numero: "; cin >> x;

    r = mult_soma(x);

    cout << x << " x 37 = " << x*37 << endl;

    if(r != x){
        cout << "Soma de digitos de " << x*37 << " nao e " << x;
    }
    else {
         cout << "Soma de digitos de " << x*37 << " e " << x;
    }
    return 0;
}
