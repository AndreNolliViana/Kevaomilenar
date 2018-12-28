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
int iguais(int V[M])
{
    int s = 0;
    for(int i =0; i< M; i++){
        if (V[i] == 1){
            s = s +1;}
    }
    if (s == M){
        return 0;
    }
    else
        return -1;
}

int vandermonde (int A[M][N])
{
    int p;
   for (int c=0; c< M; c++){
    int V[M];
    for (int l = 0; N > l; l++)
     V[l] = A[l][c];

     p = iguais(V);
     if (p == -1){
        return -1;}

     else{
        if (M == N){
            return 1;}
        else {
            return 0;}
     }
}
}

int main()
{
    int A[M][N];
    int p;
    cout << "Insira a matriz:" << endl;
    lemat(A);
    p = vandermonde(A);

    if (p == -1)
        cout << "Matriz nao atende vandermonde";
    else if (p == 0)
        cout << "Matriz atende parcialmente a vandermonde";
    else
        cout << "Matriz atende totalmente a vandermonde";
    return 0;
}
