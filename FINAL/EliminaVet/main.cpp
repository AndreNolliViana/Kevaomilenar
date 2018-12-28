#include <iostream>

using namespace std;

#define N 10

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

void troca(int &a, int &b)
{
    int copia;
    copia = a;
    a=b;
    b=copia;
}

int arruma (int V[N], int p)
{
    int q = 0;
    int ss, i;
    ss = p;
    for (i =0; i < N;i++){
        if (p == i){
            p++;
            troca (V[i], V[i+1]);}
        if (i == N-1){
            ss = V[p];
            troca (V[i], q);
            }
    }

   return ss;
}

int main()
{
    int V[N];
    int p, s;

    cout << "Digite o vetor: " << endl;
    levet(V);
    cout << "Indique a posicao p/ eliminar: "; cin >> p;
    s = arruma(V, p);

    cout << "Vetor final: " << endl;
    impvet(V);
    cout << endl << "Valor eliminado: " << s;

    return 0;
}
