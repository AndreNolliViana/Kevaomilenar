#include <iostream>

using namespace std;

int main()
{
   float h, l, c, x, r, a;
   cin >> h >> l >> c >> x;

   cout << "Altura: " << h << endl;
   cout << "largura: " << l << endl;
   cout << "comprimento: " << c << endl;
   cout << "consumo médio diario: " << x << endl;
   r= (h*l*c)/1000;
   cout << "capacidade do reservatorio: " << r << " litros" << endl;
   a=r/x;
   cout << "autonomida do reservatorio: " << a << " dias" << endl;
   if (a<2)
      cout << "consumo elevado";
   if (2<=a && a <=7)
      cout <<"consumo moderado";
   if (a > 7)
      cout << "consumo reduzido";
   return 0;
}
