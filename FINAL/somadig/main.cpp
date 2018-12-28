#include <iostream>

using namespace std;

int main()
{
    int n, k;
    int s = 0;
    cout << "digito inteiro positivo: "; cin >> n;
    while (n>0){
        k = n%10;
        s = s+ k;
        n = n/10;}
    cout << "Soma dos nros.: " << s;
    return 0;
}
