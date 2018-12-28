#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int p, tam, t0, t1, t2, t3, t4, t5, t7, t8, t9;
    float media;
    tam=t0=t1=t2=t3=t4=t5=t7=t8=t9=0;

    cout << "informe as placas dos veiculos: " << endl;
    cin >> p;

    while( p!=-1){
            tam = tam +1;
            if (p%10 == 1){
                    t1=t1+1;}

            else if (p%10 == 2){
                    t2=t2+1;}

            else if (p%10 == 3){
                    t3=t3+1;}

            else if (p%10 == 4){
                    t4=t4+1;}

            else if (p%10 == 5 || p%10 == 6){
                    t5=t5+1;}

            else if (p%10 == 7){
                    t7=t7+1;}

            else if (p%10 == 8 ){
                    t8=t8+1;}

            else if (p%10 == 9){
                    t9=t9+1;}

            else {
                    t0=t0+1;}
            cin >> p;
    }

    if (p == -1) {
            cout << "total de abril: " << t1 << endl;
            cout << "total de maio: " << t2 << endl;
            cout << "total de junho: " << t3 << endl;
            cout << "total de julho: " << t4 << endl;
            cout << "total de agosto: " << t5 << endl;
            cout << "total de setembro: " << t7 << endl;
            cout << "total de outubro: " << t8 << endl;
            cout << "total de novembro: " << t9 << endl;
            cout << "total de dezembro: " << t0 << endl;
            cout << "Tamanho da frota: " << tam << " veiculos"<< endl;
            media= (tam)/9.0;
            cout << "media mensal de licenciamentos pagos: " << media <<endl; }

    return 0;
}
