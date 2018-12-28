#include <iostream>

using namespace std;

int main()
{
   float a, b;
   float m;
   cin >> a >> b;
   m = a*b;

   if ( m > 0){
        cout << "positivo"<< endl;
   }
    if (m < 0){
       cout << "negativo" << endl;
    }
    if (m == 0) {
        cout << "nulo"<< endl;
}
   return 0;
}
