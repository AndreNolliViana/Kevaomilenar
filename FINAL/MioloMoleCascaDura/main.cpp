#include <iostream>

using namespace std;

#define M 3
#define N 4

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
int borda (int A[M][N])
{
    int b, m = 0;
    for (int l=0; l< M; l++){
        for (int c = 0; N > c; c++){
            if (l == 0){
                b = b + A[l][c];}
            else if (l == (M-1)){
                b = b + A[l][c];}
            else if ( l > 0 && l < (M-1)){
                if(c == 0 || c == (N-1))
                    b= b + A[l][c];
                else
                    m = m + A[l][c]; }
    }}
    cout << b << " " << m << endl;

    if (b >= m){
        return 1;}

    else {
        return 0;}

}

int main()
{
    int A[M][N];
    int b;
    cout << "Informe a matriz: " << endl;
    lemat(A);
    b = borda(A);
    if (b == 1)
        cout << "Borda";
    else
        cout << "Miolo";


    return 0;
}
