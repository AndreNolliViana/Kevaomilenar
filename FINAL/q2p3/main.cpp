#include <iostream>

using namespace std;

#define M 3
#define N 3

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
int existe (int l, int c)
{
   if (l >= 0 && c >= 0 && l < M && c < N)
        return 1;
    else
        return 0;
}
void somavizi(int A[M][N])
{
    int s = 0;
    for (int l=0; l< M; l++){
        for (int c = 0; N > c; c++){
            for (int ll = l - 1; ll <= l+1; ll++){
                for (int cc = c -1; cc <= c+1; cc++)
                        if (ll >= 0 && cc >= 0 && ll < M && cc < N){
                        s = s + A[ll][cc];}}
                        A[l][c] = s;
                        s = 0;}}

}

int main()
{
    int A[M][N];
    cout << "Digite a matriz:" << endl;
    lemat(A);
    somavizi(A);
    cout << "Nova matriz com vizinhos somados: " << endl;
    impmat(A);

    return 0;
}
