#include <iostream>

using namespace std;

int main()
{
    int a,b,c;

    cout << "Entre com um valor positivo: "; cin >> a >> b >> c;

    if ( a < 10 && b < 10 && c < 10){
        if ( a > b && b > c){
            cout << "ordem  nao crescente: " << a << b << c;}
         else if (c > b && b > a){
            cout << "ordem crescente: " << a << b << c;}
         else if ( c == b || b == a || c == a){
            cout << "sem resposta proposta";}
    } else {
        cout << "valor invalido" ;}


    return 0;
}
