#include <iostream>

using namespace std;

#define M 6
#define N 5

void lemat (char A[M][N])
{
    int l, c;

    for (l = 0; l < M; l++)
        for (c = 0; c < N; c++)
        cin >> A[l][c];
        }

void impmat (char A[M][N])
{
    int l, c;

    for (l = 0; l < M; l++){
        for (c = 0; c < N; c++)
        cout << A[l][c] << " ";
        cout << endl;}
}

int main()
{
    char A[M][N];
    char P[10000];

    cout << "Informe a matriz: " <<endl;
    lemat(A);

    cout << "Letras a procurar: " << endl;
    while (P != " * "){
        int c = 0;
        cin >> P[c];
        c++;
    }
    return 0;
}
