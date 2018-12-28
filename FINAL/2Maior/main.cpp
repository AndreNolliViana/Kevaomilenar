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

int achavizinho(int V[N])
{
    int vizi = 0;
    for(int i=0; i<N; i++){
        if (i==0){
            if (V[i]> V[i+1]){
                vizi++;}
        }
        else if (i == N-1){
            if (V[i]>V[i-1]){
                vizi++; }
        }
        else if (i > 0 && i < N-1) {
            if (V[i]>V[i-1] && V[i]>V[i+1]){
                vizi++;}
        }
    }
    return vizi;
}
int maior2 (int A[M][N], int qt)
{
    int q;
    qt = 0;
    for (int l = 0; l<M; l++){
        int V[N];
        for (int c = 0; c<N; c++){
            V[c] = A[l][c];
        }
    q = achavizinho(V);
    qt = qt + q;
    }
    return qt;
}


int main()
{
    int A[M][N];
    int q, f;
    cout << "Insira a matriz: " << endl;
    lemat(A);
    f = maior2(A, q);
    cout << "Qtde de 2maior: " << f;
    return 0;
}
