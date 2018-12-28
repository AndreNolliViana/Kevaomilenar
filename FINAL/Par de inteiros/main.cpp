#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, d, ss;
    int s = 0;
    d = 1;

    cout << "Par de inteiros 1: "; cin >> a >> b;

    while (a != 0 && b!= 0){
                ss = 0;
            if (b == 0){
                cout << "Segundo nro invalido" << endl;
                cout << "Par de inteiros " << d << ": "; cin >> a >> b;}

            else if (b > 0){
                    cout << "Serie gerada: " << endl;
                    s++;
                for (int i = 0; i< b; i++){
                        int t = (a + b*i);
                        ss = ss + t;
                    cout << t << " ";}}
            else if (b < 0){
                    cout << "Serie gerada: " << endl;
                     s++;
                for (int i = 0; i < abs(b); i++){
                        int t = ((abs(b)-1-i)*b);
                        ss = ss + t;
                       cout << t << " ";}}
    d++;
    cout << endl << "Soma dos termos da serie: " << ss << endl;
    cout << "Par de inteiros " << d << ": "; cin >> a >> b;
    }

    cout << "Detectado o final de pares" << endl;
    cout << "Series contadas: " << s;
    return 0;
}
