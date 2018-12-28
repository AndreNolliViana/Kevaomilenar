#include <iostream>

using namespace std;

void precos (float km, float pg, float pe, float &cg, float &ce)
{
    cg = (km/11)*pg;

    ce = (km/3)*pe + 5;}


int main()
{
    float km, pg, pe, cg, ce;

    cout << "Preco da gasolina: "; cin >> pg;
    cout << "Preco da elet: "; cin >> pe;
    cout << "Distancia da viagem: "; cin >> km;

    while (km > 0){
        precos (km, pg, pe, cg, ce);
        cout << "Preco em gaso: " << cg << endl;
        cout << "Preco em elet: " << ce << endl;
        cout << "Distancia da viagem: ";
        cin >> km;
    }
    return 0;
}
