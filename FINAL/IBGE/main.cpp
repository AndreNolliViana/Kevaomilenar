#include <iostream>

using namespace std;


int main()
{
    int d, cd;
    int h, m;
    float sm, sh, c, cT, smT, shT = 0.0;

    cout << "Dias trabalhados: "; cin >> d;
    cout << "Cota diaria: "; cin >> cd;

    for(int z=0; z < d; z++){
        cout << "Dia " << z+1 << endl;
        cin >> h >> m;
      while ( h!=-1 && m!=-1){
          if(c < cd){
            c = c + 1;
            sh = sh + h;
            sm = sm + m;}

          cT = cT + c;
          smT= smT + sm;
          shT = shT + sh;
        cin >> h >> m;
          c, sm, sh= 0;
      }
    }

   cout << "Total de casas: " << cT << endl;
   cout << "Total de homens: " << shT << endl;
   cout << "Total de mulheres: " << smT << endl;
   cout << "Media de homens por casa: " << shT/cT << endl;
   cout << "Media de mulhreses por casa: "<< smT/cT << endl;


    return 0;
}
