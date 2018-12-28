#include <iostream>

using namespace std;

int ident_dim (int x, int y, int &i, int &u){
int q, x1;
i = q = 0;
u = y%10;
x1 = x;

while (x1 > 0){
    i = i+1;
    if (x1%10 == u){
        q = q+1;}
    x1 = x1/10;
}
return q;
}

int main()
{
    int x, y, c, f, u;

    cout << "Inteiros (2): "; cin >> x >> y;

    f = ident_dim(x, y, c, u);

    cout << x << " Tem " << c << " algarismos" << endl;
    cout << "Ocorrencias de " << u << " em " << x << ": " << f;

    return 0;
}
