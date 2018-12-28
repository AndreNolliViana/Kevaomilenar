#include <iostream>

using namespace std;

int multi (int a, int b, int l)
{
    int s;

    s = a + b;

    if (s%a==0 || s%b==0 || s%l==0 ){
        return s; }
    else {
        return 0; }
}

int main()
{
    int k, v1, v2, f;

    cout << "Indique valor K: "; cin >>k;
    cout << "Indique par de valores: "; cin >> v1 >> v2;

    f=multi(v1, v2, k);

    if(f>0){
        cout << "Soma = " << f; }
    else {
        cout << "Falhou !!"; }
    return 0;
}
