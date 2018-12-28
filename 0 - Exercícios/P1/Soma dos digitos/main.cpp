#include <iostream>

using namespace std;

int main()
{
    int n, soma, resto;
    soma = 0;

    cout << "Digite o valor int positivo: ";
    cin >> n;

    if ( n>0){
           resto=n%10;
           n=(n-resto)/10;
           soma=soma+resto;
    }
    cout << "A soma dos digitos: " << soma;

    return 0;
}
