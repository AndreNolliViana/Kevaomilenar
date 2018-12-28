#include <iostream>

using namespace std;

int main()
{
    int a, b, m, i, d, t1, t2, p;
    i = m = 0;
    cout << "Digite o par: "; cin >> a >> b;

    while (a!=0 && b!=0){

        i = i + 1;

        if(a>b){
            d = a - b;
            if (d > m){
                m = d;
                t1 = a;
                t2 = b;
                p = i;}}

        else (b >= a);{
            d = b - a;
            if (d > m){
                m = d;
                t1 = b;
                t2 = a;
                p = i;}}

         cin >> a >> b;
    }
    cout << "Maior diferenca foi: " << m << " no par " << p << " e seus valores eram: " << t1 << " e " << t2;
    return 0;
}
