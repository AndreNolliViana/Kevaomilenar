#include <iostream>

using namespace std;

int custo (int i, int p, int d)
{
    float cu;

    cu = 10*d/1000;

    if( i<=0 || p<=0 || d<=0){
        cu = 1; }
    if(i>=60){
        cu = cu/2;}
    if(p>=100){
        cu = 2*cu;
    }
    return cu;
    }

int main()
{
    int i, p, d;
    float c;

    cout << "Digite idade (anos): "; cin >> i;
    cout << "Digite peso (Kg): "; cin >> p;
    cout << "Digite distancia (m): "; cin >> d;

    c=custo(i, p, d);

    cout << "Seu custo sera de : R$" << c << endl;
    return 0;
}
