#include <iostream>

using namespace std;

int main()
{
    int a = 15;
    float b = 5.5;
    float c;
    float d;

    cout << "Ola usuario, as constantes a e b valem " << a << " e " << b <<
    " respectivamente" << endl;
    cout << endl;
    cout << "Logo, calcular a expressao a + b tem de ser igual a 20.5, como demonstrado a seguir: " << endl;
    cout << "a + b =" << a + b << endl;
    cout << endl;
    cout << "Analogamente a isso, concluimos que:" << "a - b =" << a - b << endl;
    cout << "Seguindo nesse parametro, faremos as mesmas operacoes com valores escolhidos por voce" << endl;
    cout << "Escolha os valores para as constantes c e d, nesta ordem, separando-os em c d" << endl;

    cin >> c;
    cin >> d;

    cout << "Assim feito, c + d =" << c + d << endl;
    cout << "e  c - d=" << c - d << endl;
    cout << "Encerrado os estudos :) " << endl;

return 0;
}
