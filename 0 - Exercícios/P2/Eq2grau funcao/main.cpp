#include <iostream>
#include <cmath>
using namespace std;

int nraizes (float a, float b, float c, float &r1, float &r2)
{
  int nraiz;
  float delta;
  delta = (b*b) - (4*a*c);

  if (delta > 0){

    r1 = (-b -(sqrt(delta)))/2*a;
    r2 = (-b +(sqrt(delta)))/2*a;
    nraiz=2;
}

 else if (delta == 0){

    nraiz = 1;

    r1 = ((-1*b) + sqrt(delta))/2*a;
    r1=r2;
}

else{

    nraiz = 0;
}
return nraiz;
 }

int main()
{
    float a, b, c;
    float r1, r2;
    int nraiz;

    cin >> a >> b >> c;

    nraiz = nraizes(a, b, c, r1, r2);

    if (nraiz==2){

    cout << "O numero de raizes e: " << nraiz << endl;
    cout << "Suas raizes sao: " << r1 << " " << r2;}

    else if (nraiz == 1){
        cout << "O numero de raizes e: " << nraiz << endl;
        cout << "Sua raiz e: " << r1; }
    else {
        cout << "Nao possui raizes reais" << endl;
    }


    return 0;
}
