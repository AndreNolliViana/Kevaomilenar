#include <iostream>

using namespace std;
#define N 10

void levet(int A[N])
{
    for(int c=0; c<N; c++)
        cin >> A[c];

}
void ImpVet(int A[N])
{
    for(int c=0; c<N; c++)
        cout << A [c] << " ";
}

int submultme (int A[N], int B[N])
{
    int s = 0;

    for(int c=0; c<N; c++)
    if(c%2==0){
        A[c]=A[c]-B[c];
        s = s + A[c];
        }
    else {
        A[c]=A[c]*B[c];
        s = s + A[c];
    }
    return s;
}


int main()
{
    int VA[N];
    int VB[N];
    int k;

    cout << "Informe VA: " << endl;
    levet(VA);

    cout << "Informe VB: " << endl;
    levet(VB);
    k = submultme(VA,VB);
    cout << "Resultado VA: " << endl;
    ImpVet(VA);
    cout << endl;
    cout << "A media aritmetica de VA: " << k/10;
    return 0;
}
