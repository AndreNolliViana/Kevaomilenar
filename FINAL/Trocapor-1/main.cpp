#include <iostream>

using namespace std;

#define N 10

void levet (int V[N])
{
    for(int c = 0; c < N; c++)
       cin >> V[c];
}

void impvet (int V[N])
{
   for (int c = 0; c < N; c++)
    cout << V[c] << " ";
}
int troquinha(int V[N])
{
    int s = 0;
    int sv;
    sv = V[0];
    for (int c = 0; c < N; c++){
            int m = (V[c]% sv);
        if (m == 0){
            s = s + V[c];
            V[c]=-1;}
        else if (m != 0)
            V[c] = V[c];
    }
    return s;
}

int main()
{
    int A[N];
    int t;
    cout << "Digite o vetor: " << endl;
    levet(A);
    t = troquinha(A);
    cout << "Novo vetor: " << endl;
    impvet(A);
    cout << endl << "Soma: " << t;

    return 0;
}
