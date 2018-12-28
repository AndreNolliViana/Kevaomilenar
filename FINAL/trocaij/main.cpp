#include <iostream>

using namespace std;

#define M 2
#define N 5

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

void troca(int A[M][N])
{
    for(int l = 0; l < M; l++){
        for (int c = 0; c < N; c++)
            if ((l+c)%2 == 0)
                A[l][c] = 0;
    }

}

void achamaior (int A[M][N], int &m, int &sl, int &sc)
{
    m = -100;
    for(int l = 0; l < M; l++){
        for (int c = 0; c < N; c++)
            if (A[l][c] > m){
                m = A[l][c];
                sl = l;
                sc = c; }}
}

int main()
{
    int A[M][N];
    int m, lM, cM;
    cout << "Informe a matriz: " << endl;
    lemat(A);
    troca(A);
    cout << "Matriz transformada: " << endl;
    achamaior(A, m, lM, cM);
    impmat(A);
    cout << "Maior valr de A: " << m << ", linha " << lM << ", coluna " << cM;

    return 0;
}
