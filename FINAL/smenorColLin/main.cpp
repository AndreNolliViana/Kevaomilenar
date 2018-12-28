#include <iostream>

using namespace std;

#define M 4

void lemat (int J[M][M])
{
for (int l=0; l< M; l++)
    for (int c = 0; M > c; c++)
    cin >> J[l][c];
}
void impmat (int J [M][M])
{
    for (int l=0; M > l; l++){
        for (int c = 0; M > c; c++)
            cout << J[l][c] << " ";
            cout << endl;}
}
int achamenor(int V[M])
{
    int m;
    m = V[0];
    for (int i = 0; i < M; i++){
    if (V[i] < m){
        m = V[i];}}
     return m;
}

int somamenl(int A[M][M])
{
    int m;
    int s = 0;
    for (int l = 0; l <M; l++){
        int V[M];
        for(int c = 0; c<M; c++){
            V[c] = A[l][c];}

        m = achamenor(V);
        s = s + m;

    }
    return s;
}

int somamenc(int A[M][M])
{
    int m;
    int s = 0;
    for (int c = 0; c < M; c++){
        int V[M];
        for(int l = 0; l < M; l++)
            V[l] = A[l][c];

    m = achamenor(V);
    s = s + m;
    }
    return s;
}

int main()
{
    int A[M][M];
    int l, c, s;
    cout << "Insira a matriz:" << endl;
    lemat(A);
    l = somamenl(A);
    c = somamenc(A);
    s = l + c;
    cout << "Soma dos menores nas linhas: " << l << endl;
    cout << "Soma dos menores nas colunas: " << c << endl;
    cout << "Soma dos menores em linha e coluna: " << s;
    return 0;
}
