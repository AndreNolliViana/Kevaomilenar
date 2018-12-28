#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, cp;
    cp = 1;
    cout << "Par de inteiros " << cp << ": "; cin >> a >> b;

    while (b == 0){
        cout << "Segundo nro invalid." << endl;
        cout << "Par de inteiros " << cp << ": "; cin >> a >> b;}

    while (a != 0 and b!= 0){

    if (b<0){
        cout << "Serie gerada : " << endl;
        int s = 0;
        for (int k = abs(b)-1; k >=0 ; k--){
        cout << b*k << " ";
        s = s + (b*k);}
        cout << endl << "Soma gerada: " << s << endl;
    }

    if (b>0){
    cout << "Serie gerada : " << endl;
    int s = 0;
    for (int i = 0; i < b; i++){
        cout << a + i*abs(b) << " ";
        s = s + (a + i*abs(b)-1);
    }
        cout << endl << "Soma gerada: " << s << endl;
        }
  cp++;

  cout << endl;

  cout << "Par de inteiros " << cp << ": "; cin >> a >> b;
  if (a!=0 && b == 0){
  while (b == 0){
        cout << "Segundo nro invalid." << endl;
        cout << "Par de inteiros " << cp << ": "; cin >> a >> b;}}
    return 0;
}
}
