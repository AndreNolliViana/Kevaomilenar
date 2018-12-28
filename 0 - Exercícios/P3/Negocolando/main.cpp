#include <iostream>

using namespace std;
#define N 5
#define M 4

void lemat (char A[M][N])
{
    int l, c;

    for (l = 0; l < M; l++)
        for (c = 0; c < N; c++)
        cin >> A[l][c];
        }

void impmat (char A[M][N])
{
    int l, c;

    for (l = 0; l < M; l++){
        for (c = 0; c < N; c++)
        cout << A[l][c] << " ";
        cout << endl;}
}
int colando (char A[M[N])
{
    for(int l =0; l<M; l++)
       for (int c=0; c<N;c++)
    if((A[l][c]== "i" && A[l][c+1]=="<" )||(A[l][c]== ">" && A[l][c+1]=="<")||(A[l][c]== ">" && A[l][c+1]=="i"))
        ac++;
    return ac;

}
void fiscalcola (char A[M][N])
{
    int ac;
    for(int l =0; l<M; l++)
       for (int c=0; c<N;c++)
        if(colando(A))
        A[l][c] = "x";

}



int main()
{
    int A[M][N];


    cout << "Hello world!" << endl;
    return 0;
}
