#include <iostream>

using namespace std;
#define M 5

void LeMat (float A[M][2])
{
    for(int l=0; l < M; l++){
        for(int c=0; c < 2; c++)
            cin >> A[l][c];
    }
}

void ImpMat(float A[M][2])
{
    for(int l=0; l<M; l++){
        for (int c=0; c<2; c++)
            cout << A[l][c] << " ";
        cout << endl;
    }
}

float cart (float A[M][2], int &i)
{
    i =0;
    for (int l=0; l<M; l++)
    for(int c=0; c<1; c++){
        if ((A[l][c]*-3)+7==A[l][c+1])
            A[l][c+1]=A[l][c+1];
        else{
            i++;
            A[l][c+1]= ((-3*A[l][c])+7);
   } }
   return i;
}

int main()
{
    float A[M][2];
    int i;

    cout << "Informe a matriz (" << M << "x2)" << endl;
    LeMat(A);

    cout << "Matriz resultante: "<< endl;
    cart(A, i);
    ImpMat(A);
    cout << " Alteracoes: " << i;

    return 0;
}
