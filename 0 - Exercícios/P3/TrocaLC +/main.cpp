#include <iostream>

using namespace std;
#define N 5
void lemat (int M[N][N])
{
    int l, c;

    for (l = 0; l < N; l++)
        for (c = 0; c < N; c++)
        cin >> M[l][c];
        }

void impmat (int M[N][N])
{
    int l, c;

    for (l = 0; l < N; l++){
        for (c = 0; c < N; c++)
        cout << M[l][c] << " ";
        cout << endl;}
}

void troca (int &a, int &b)
{
    int copia;
    copia = a;
    a = b;
    b = copia;
}

void trocaLC (int M[N][N], int l, int c)
{
    l = l-1;
    c = c-1;
    for (int i = 0; i < N; i++)
        troca(M [l][i], M[i][c]);
}



int main()
{
    int A [N][N];
    int l, c;

    cout << "escreva a matriz " << N << "x" << N << endl;
    lemat(A);
    cout << "Escolha a linha a ser trocada com a coluna, nesta ordem: ";
    cin >> l >> c;

    trocaLC(A, l, c);
    impmat(A);
    return 0;
}
