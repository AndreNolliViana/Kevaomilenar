#include <iostream>

using namespace std;
#define N 5

void Levet(float V[N])
{
for (int i = 0; i < N; i++)
    cin >> V[i];
}
void Impvet(float V[N])
{
for (int i = 0; i < N; i++)
    cout << V[i] << " ";
}
int Lab(float A[N],float B[N],int &c,int &m){
m = 100000000;
for (int i = 0; i<N; i++){
    c = A[i]/B[i];
    if(c < m){
        m= c;
    }
}
for (int b=0;b<N;b++){
    B[b]= A[b]/B[b];
}
 return m;
}

int main()
{
    float A[N];
    float R[N];
    int c, m;
    cout << "Informe o vetor: " << endl;
    Levet(A);
    cout << "Informe a receita: " << endl;
    Levet(R);
    Lab(A, R, c, m);
    cout << "A quantidade de comprimidos e: " << m;



    return 0;
}
