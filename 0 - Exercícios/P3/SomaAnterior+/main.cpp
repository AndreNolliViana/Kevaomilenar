#include <iostream>

using namespace std;
#define N 5

void Levet(int V[N]) {
for (int i = 0; i < N; i++)
    cin >> V[i];
}
void Impvet(int V[N])
{
for (int i = 0; i < N; i++)
    cout << V[i] << " ";
}
int SomaVet(int V[N], int &s)
{
    s = 0;

    for (int i = 0; i < N; i++){
        s = s + V[i];
        if (i==0)
        {
            V[i]= V[i];
        }
        else {
        V[i] = V[i]+V[i-1];}

        }
        return s;
}
int main()
{
    int A [N];
    int s;

    cout << "Informe o vetor: ";
    Levet(A);
    SomaVet(A, s);
    cout << "Vetor Final: "; Impvet(A);
    cout << endl;
    cout << "A soma final: " << s;
    return 0;
}
