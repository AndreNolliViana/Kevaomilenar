#include <iostream>

using namespace std;

#define M 3
#define N 4

void lemat (int J[M][N])
{
for (int l=0; l< M; l++)
    for (int c = 0; N > c; c++)
    cin >> J[l][c];
}
void impmat (int J [M][N])
{
    for (int i=0; M > i; i = i + 1){
        for (int j = 0; N > j; j = j + 1)
            cout << J[i][j] << " ";
            cout << endl;}
}

int achaM (int V[N])
{
   int a;
   a = V[0];
    for (int i = 0; i < N-1 ; i++)
       if (a > V[i+1])
         a = V[i+1];
    return a;
}
int compara  (int A[M][N])
{
    int a;
    for (int l = 0; l < M ; l++){
        int V[N];
        for (int c = 0; c<N; c++){
            V[c]= A[l][c];}

        a = achaM(V);
        for (int c = 0; c<N ;c++)
      if(A[l][c]==a){
            A[l][c]=0;
            a=-1;
      }
}
}

int somal(int V[N])
{
    int s = 0;
    for (int i= 0; i < N; i++)
        s = s + V[i];
    return s;
}

int apuracao (int J[M][N])
{
int p;
 for (int l = 0; l< M; l++){
    int V[N];
    p = 0;
    for (int c = 0; c<N; c++){
    V[N] = J[l][c];
    int s = somal(V);
    if(s == 30)
        p++;}
    }
 return p;
}

int main()
{
    int p;
    int A[M][N];
    int i;
    cout << "Informe a matriz: " << endl;
    lemat(A);
    compara(A);
    i = apuracao(A);
    cout << "Menosres nots descartadas: " << endl;
    impmat(A);
    cout << "Escolas nota 10: " << p;
    return 0;
}
