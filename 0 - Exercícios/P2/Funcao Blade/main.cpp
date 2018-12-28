#include <iostream>

using namespace std;

int blade(int a, int ns)
{
    int n1, n2, u1, u2;

    n1 = ((a%100)/10);
    n2 = a%10;
    u1 = ns/10000000;
    u2 = (ns/1000000)%10;

    if (n1==u1 && n2==u2){
        return 1; }
    else{
        return 0; }
}

int main()
{
    int a, ns, f;

    cout << "Ano de fabricacao: "; cin >> a;
    cout << "Numero de serie: "; cin >>ns;

    f = blade(a, ns);

    if (f==1){
        cout << "Nexus-6 encontrado"; }
    else {
        cout << "Replicante desconhecido"; }
    return 0;
}
