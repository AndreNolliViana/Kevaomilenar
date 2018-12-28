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

int calcmat(int A[M][N])
{
    int s = 0;

         for (int l = 0; l < M; l++)
            for (int c = 0; c < N; c++)
                if (c > l)
                    s = s + A[l][c];

         for (int l = 0; l < M; l++)
            for (int c = 0; c < N; c++)
                A[l][c] = A[l][c]*s;

         return s;
}

int main()
{
    int A[M][N];
    int f;

    cout << "Digite a matriz: " << endl;
    lemat(A);
    f = calcmat(A);
    cout << "Soma acima da diag. princ.: " << f;
    cout << endl << "Matriz final: " << endl;
    impmat(A);
    return 0;
}
