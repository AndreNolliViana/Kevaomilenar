#include <iostream>

using namespace std;

#define M 4
#define N 4

void lemat (int A[M][N])
{
for (int l=0; l< M; l++)
    for (int c = 0; N > c; c++)
    cin >> A[l][c];
}
void impmat (int A [M][N])
{
    for (int i=0; M > i; i = i + 1){
        for (int j = 0; N > j; j = j + 1)
            cout << A[i][j] << " ";
            cout << endl;}
}
void troca (int &a, int &b)
{
    int copia;
    copia = a;
    a = b;
    b = copia;
}
void trocaquad (int A[M][N])
{
    for(int l = 0; l < M/2; l++)
        for(int c  = 0; c < N; c++)
        if (c < N/2)
            troca (A[l][c], A[l+2][c+2]);
        else
           troca (A[l][c], A[l+2][c-2]);
}
void somaquad (int A[M][N], float &s)
{
   float k = 0.0;
    float p;
    for(int l = 0; l < M/2; l++)
        for (int c = 0; c < N/2; c++)
        k = k + A[l][c];

        p = (N/2)*(M/2);
        s = k/p;
}

int main()
{
    int A[M][N];
    float s;
    cout << "Matriz original: " << endl;
    lemat(A);

    cout << "Resultado troca: " << endl;
    trocaquad(A);
    impmat(A);
    somaquad(A, s);
    cout << "Media: " << s;

    return 0;
}
