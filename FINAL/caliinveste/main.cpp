#include <iostream>

using namespace std;

float calin(float s)
{
    if (s > 5000)
        s =(s + (s*0.03));

    else if (s < 5000)
        s = (s + (s*0.02));

    return s;
}

int main()
{
    float s, p;
    cout << "Saldo: "; cin >> s;
    p = calin(s);
    cout << "Novo saldo: " << p;
    return 0;
}
