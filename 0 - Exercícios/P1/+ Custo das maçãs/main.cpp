#include <iostream>

using namespace std;

int main()
{
    int m;
    float c1, c2, c3;

    cout << "Digite o No. de macas: "; cin >> m;

    if (m < 12 && m >0){
            c1=m*0.3;
            cout << "O custo das macas sera: " << c1;}

    else if (m <=0){
            cout << "Entrada invalida";}

    else if (m>=24){
            c3=0.2*m;
            cout << "O custo das macas sera: " << c3;}

    else {
        c2=0.25*m;
        cout << "O custo das macas sera: " << c2;}

    return 0;
}
