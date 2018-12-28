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
    for (int l=0; M > l; l++){
        for (int c = 0; N > c; c++)
            cout << J[l][c] << " ";
            cout << endl;}
}
void trocam (int A[M][N])
{
    int menor;
   for (int l=0; l< M; l++){
        int V[N];
        for (int c = 0; N > c; c++){
            V[c] = A[l][c];}

    menor = V[0];
        for (int i = 0; i < N; i++)
        if (menor > V[i]){
            menor = V[i];}

            for (int c = 0; c < N; c++)
                if (A[l][c] == menor){
                    A[l][c] = 0;
                    menor = -1;}}
}

int somal(int V[N])
{
    int s = 0;
    for (int i = 0; i<N; i++)
        s = s + V[i];

        return s;
}

int samba (int A[M][N])
{
    int m = 0;
    int f;

    for (int l=0; l< M; l++){
        int V[N];
        for (int c = 0; N > c; c++){
            V[c] = A[l][c];

            trocam(A);
            f = somal(V);
            if (f == 30)
                m = m + 1;
            }}
        return m;
}


int main()
{
    int A[M][N];
    int ed;

    cout << "Digite a matriz: " << endl;
    lemat(A);
    ed = samba(A);
    cout << "Menores notas descartadas: " << endl;
    impmat(A);
    cout << "Escolas nota 10: " << ed;
    return 0;
}
