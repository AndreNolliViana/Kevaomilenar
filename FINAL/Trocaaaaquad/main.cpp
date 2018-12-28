#include <iostream>

using namespace std;

#define M 4
#define N 4

void lemat (int J[M][N])
{
for (int l=0; l< M; l++)
    for (int c = 0; N > c; c++)
    cin >> J[l][c];
}
void impmat (int J [M][N])
{
    for (int l=0; M > l; l++){
        for (int c = 0; N > c; c++)
            cout << J[l][c] << " ";
            cout << endl;}
}
void troca (int &a, int &b)
{
    int copia;
    copia = a;
    a = b;
    b = copia;
}

float mediaquades(int A[M][N])
{
    float s = 0.0;
    float m;
    for (int l = 0; l < M/2; l++)
    for(int c = 0; c < N/2; c++){
            s = s + A[l][c];
            }

            m = s/(M/2.0*N/2.0);
        return m;
}

float trocaquad (int A[M][N])
{
    float m;
    for ( int l = 0; l < M; l++){
        for ( int c = 0; c < N/2; c++){
            if (l == 0 || l == 1)
                troca(A[l][c], A[l+2][c+2]);
            else
                troca(A[l][c], A[l-2][c+2]);
        }
    }
        m = mediaquades(A);
        return m;
}

int main()
{
    int A[M][N];
    float f;

    cout << "Insira a matriz: " << endl;
    lemat(A);
    f = trocaquad(A);
    cout << "Matriz resultante: " << endl;
    impmat(A);
    cout << endl << "Media do quad superior esquerdo: " << f;
    return 0;
}
