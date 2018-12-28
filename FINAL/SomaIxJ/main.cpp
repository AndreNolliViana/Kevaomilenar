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

void subs (int J[M][N])
{
    for (int l=0; l< M; l++){
        for (int c = 0; c < N; c++){
            if((l+c)%2==0)
                J[l][c] = 0;}}
}
void achaMaior(int J[M][N], int &m, int &lM, int &cM)
{
    m = -1000;
    for (int l=0; l< M; l++){
        for (int c = 0; N > c; c++){
        if ( m < J[l][c]){
            m = J[l][c];
            cM = c;
            lM = l;}}}

}

int main()
{
    int A[M][N];
    int m, lM, cM;
    cout << "Informe a matriz: " << endl;
    lemat(A);
    subs(A);
    cout << "Matriz transformada: " << endl;
    achaMaior(A, m, lM, cM);
    impmat(A);
    cout << "Maior valr de A: " << m << ", linha " << lM << ", coluna " << cM;

    return 0;
}
