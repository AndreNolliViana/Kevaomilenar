#include <iostream>

using namespace std;

int main()
{
    float c, v, l, i;
    cout << "Compra: "; cin >> c;
    cout << "Venda: "; cin >> v;
    l= v-c;

    if (l<=1000.00){
        cout << "Sem imposto";
        return 0;}

    else if (l> 1000.00 && l <= 3790.00){
        i = l*0.1;}

    else {
        i = l*0.25;}

    cout << "Imposto a pagar: " << i;
    return 0;
}
