#include <iostream>

using namespace std;

#define N 5

void lemat (int M[N][3])
{
    int l, c;

    for (l = 0; l < N; l++)
        for (c = 0; c < 3; c++)
        cin >> M[l][c];
        }

void impmat (int M[N][3])
{
    int l, c;

    for (l = 0; l < N; l++){
        for (c = 0; c < 3; c++)
        cout << M[l][c] << " ";
        cout << endl;}
}

int Maior (int M[N][3])
{
  int s = 0;
  for (int l=0; l < N; l++)
        if (M[l][1]*M[l][2]>s)
            s=M[l][0];
    return s;
}

int main()
{
  int A[N][3];

  cout << "Informe a tabela de produtos: " << endl;
  lemat(A);
  cout << "O produto de maior valor é: " << Maior(A);
      return 0;
}
