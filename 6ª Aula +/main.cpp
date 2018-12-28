#include <iostream>

using namespace std;

float pot (float x, int n )
{
    int i;
    float p;
    i= 0;
    p = 1.0;

    while (i < n){
         p = p*x;
         i= i+1;
    }
         return p;
}

float power (float x, int n)
{
    if (n>=0){
        return pot (x, n);}

    else {
        return 1.0/pot (x, -n);}
}

int main()
{
    int n;
    float x;

    cout << "Insira o numero e a potencia desejada: ";

    cin >> x >> n;

    cout << "O valor final e: " << power (x, n) << endl;
    return 0;
}
