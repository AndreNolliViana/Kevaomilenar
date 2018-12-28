#include <iostream>

using namespace std;

#define M 5
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
void somal (V[N])
{
    int k = 0;
    int sc;

    for (int l)
        for (int i = 0; i <2; i++)
            k = k + V[i];

        for (int i = 2; i < N; i++){
            if (k > V[i])
                cout << "Linha" <<

    }


}

void ehtriang (int A[M][N])
{
    for (int l=0; l< M; l++){
        int V[N];
        for (int c = 0; N > c; c++){
            V[c] = A[l][c];
        }
        somal(V);

    }

}

int main()
{
    int A[M][N];

    cout << "Indique a matriz: " << endl;
    lemat(A);
    cout << endl;

    cout << "Resultado: " << endl;
    return 0;
}
