#include <iostream>

using namespace std;

int pontuacao (int t, int n)
{
  int p;

  if (t>100 ){
    p=n*5;  }

  else if (t<=50){
    if (n<=30) {
        p = n*30; }

    else{
        p = n*50; }
} else {
    if (n<=30){
        p = n*20; }
    else {
        p = n*40; }
    }
    return p;
}

int main()
{
    int t, n, p;

    cout << "Digite o nro de acertos: "; cin >> n;
    cout << "Digitw o tempo: "; cin >> t;

    p = pontuacao(t, n);

    cout << "A pontuacao foi: " << p << endl;

    return 0;
}
