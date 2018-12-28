#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, t, mt, a1, b1, c, i;
    mt=-1;
    i = 0;
    cout <<"Digite os pares de numeros: ";
    cin >> a >> b;

    while ( a!=0 || b!=0) {
            t=abs(a-b);
            i = i+1;
             if (t>mt){
                mt = t;
                c = i;
                a1 = a;
                b1 = b;}
             cin >> a >>b;
    }
    if (a==0 && b==0)
        cout << "o maior intervalo e: "<< mt <<" - " << c << "o. par" << "(" << a1 << " " << b1 << ")";
    return 0;
}
