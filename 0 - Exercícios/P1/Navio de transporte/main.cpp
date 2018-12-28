#include <iostream>

using namespace std;

int main()
{
    float c, d, v, t, au, ad;
    int p, mat, mad, had, hat;

   cout << "peso a transportar (kg): "; cin >> c; cout << endl;

    if (c>1000){
            cout << "peso invalid";}

    else {
            cout << "distancia a trasportar (km): "; cin >> d; cout << endl;
            cout << "Prazo de emtrega(h): "; cin >> p; cout << endl;

            v=30 + (20*(1-(c/1000)));
            t=d/v;
            cout << "tempo p/ entrega: " << t << endl;

            if (t==p){
                cout << "entrega pontual";}

            else if (t>p){
                    au=t-p;
                    mat=(au*60)-60;
                    hat=au;
                    cout << "entrega atrasada em: "<< hat << "h "<< mat<<"m";}

            else {
                ad=p-t;
                mad=(ad*60)-60;
                had=ad;
                cout << "entrega adiantada em "<<had<< "h "<< mad<< "m";}
            }
    return 0;
}
