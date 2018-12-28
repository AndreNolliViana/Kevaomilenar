#include <iostream>

using namespace std;

#define N 4

void lemat (int M[N][N])
{
for (int l=0; l< N; l++)
    for (int c = 0; N > c; c++)
    cin >> M[l][c];
}
void impmat (int M [N][N])
{
    for (int i=0; N > i; i = i + 1){
        for (int j = 0; N > j; j = j + 1)
            cout << M[i][j] << " ";
            cout << endl;}
}

int calc_mat (int M[N][N], int &s)
{
   s = 0;
        for(int l = 0; l<N; l++){
           for (int c = 0; c<N; c++){
           if (c > l)
           s = s + M[l][c];}
           }

    for(int i = 0; i < N ; i++){
        for (int j = 0; j<N; j++)
        M[i][j]= M[i][j]*s;}

    return s;
}

int main()
{
    int s;
    int M[N][N];
    cout << "Informe a matriz:" << endl;
    lemat(M);
    calc_mat(M, s);
    cout << "A soma acima da diag. princ.: " << s;
    cout << endl;
    cout << "Matriz final: " << endl;
    impmat(M);

    return 0;
}
