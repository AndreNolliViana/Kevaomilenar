#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, d1, d2, d3, d4;

    cout << "No.: ";
    cin >> a;

    if (a<100 || a>999){
        cout << "Entrada invalida";}

        else {

    d3 = a%10;
    d2 = (a/10)%10;
    d1 = a/100;
    d4 = (d1 + (d2*3) + (d3*5))%7;

    if (d4%2 == 1){
            cout << "No. obtido: " << d1 << d2 << d3 << d4;}
    else {
            d4 = d4+1;
            cout << "No. obtido: " << d1 << d2 << d3 << d4;}
        }
    return 0;
}
