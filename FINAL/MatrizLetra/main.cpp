#include <iostream>

using namespace std;

#define M 3
#define N 3

void lemat(char A[M][N])
{
    for(int l = 0; l<M; l++)
        for(int c = 0; c < N; c++)
            cin >> A[l][c];
}
void impmat (char A[M][N])
{
    for (int l =0; l<M; l++){
        for (int c =0; c<N; c++)
            cout << A[l][c] << " ";
        cout << endl;}
}

void trocaa(char A[M][N])
{
    char f = 'a';
    char t = '*';
    for (int l =0; l<M; l++)
        for (int c =0; c<N; c++)
            if (A[l][c] == f)
                A[l][c] = t;
}


int main()
{
    char A[M][N];
    cout << "Digite a matriz:" << endl;
    lemat(A);
    cout << "Matriz final: " << endl;
    impmat(A);
    return 0;
}
