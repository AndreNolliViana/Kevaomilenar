#include <iostream>

using namespace std;

#define N 6

void levet (int V[N])
{
    for(int c = 0; c < N; c++)
       cin >> V[c];
}

void impvet ( int V[N])
{
   for (int c = 0; c < N; c++)
    cout << V[c] << " ";
}
void troca (int &a, int &b)
{
    int copia;
    copia = a;
    a=b;
    b=copia;
}
void bolha (int V[N])
{
    for (int ult = N-1; ult >=0; ult--)
            for (int i = 0; i < ult; i++)
                    if(V[i]>V[i+1])
                        troca (V[i], V[i+1]);
}

int acha2maio(int V[N])
{
    int s;
    bolha(V);
    s = V[N-2];
    V[N-2]=0;
    return s;
}
void salvavet (int A[N], int B[N])
{
        for (int i = 0; i < N; i++)
            B[i] = A[i];
}
void troquinha (int A[N],int B[N])
{
    int s;
    salvavet(A, B);
    s = acha2maio(A);
        for (int i = 0; i < N; i++){
            A[i] = B[i];
            if (A[i] == s)
                A[i] = 0;}
}

int main()
{
    int A[N];
    int B[N];
    int segmai;
    cout << "Digite o vetor: " << endl;
    levet(A);
    salvavet(A, B);
    segmai = acha2maio(A);
    cout << "O segundo maior valor era: " << segmai << endl;
    troquinha(A, B);
    cout << "O vetor resultante: " << endl;
    impvet(A);
    return 0;
}
