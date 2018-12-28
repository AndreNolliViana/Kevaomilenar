#include <iostream>

using namespace std;

#define L 4
#define C 3

void lemat (int M[L][C], int nl, int nc)
{
    int l, c;

    for (l = 0; l < nl; l++)
        for (c = 0; c < nc; c++)
        cin >> M[l][c];
        }

void impmat (int M[L][C], int nl, int nc)
{
    int l, c;

    for (l = 0; l < nl; l++){
        for (c = 0; c < nc; c++)
        cout << M[l][c] << " ";
        cout << endl;}

int main()
{
   int A[L][C];
   int B[C][L];

   lemat(A, L, C);
   cout << endl;
   impmat(A, L, C)
   cout << endl << endl;
    return 0;}
}
