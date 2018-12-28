#include <iostream>

using namespace std;
#define N 6

void Levet(int V[N])
{
for (int i = 0; i < N; i++)
    cin >> V[i];
}

void Impvet(int V[N])
{
for (int i = 0; i < N; i++)
    cout << V[i] << " ";
}

int SubsMult (int A[N], int B[N], int &c)
{
    for (int i = 0; i<N; i++){
        if (A[i]%B[i]==0 || B[i]%A[i]==0){
            B[i]= A[i]+ B[i];
            c++;
        }
        else{
            B[i]=B[i];
        }
    }
    return c;
}



int main()
{
    int A[N];
    int B[N];
    int c;

    cout << "Indique a primeira sequencia: ";
    Levet(A);
    cout << "Indique a segunda sequencia: ";
    Levet(B);
    cout << "Resultados: ";
    SubsMult(A, B, c);
    Impvet(B);
    cout << endl;
    cout << c << " substituicoes";

    return 0;
}
