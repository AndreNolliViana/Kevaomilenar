#include <iostream>

using namespace std;

#define N 5

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
void subtracao (int V[N], int p, int q)
{
    for (int i = 0; i < N ; i++){
        if (p == i){
          if (V[i] <= 0){
            cout << "Filme " << p << " sem exemplares";}
          else{
                V[i] = V[i] - q;
            cout << "Filme " << p << " alugado"; }
          } }
}
void adicao (int V[N], int p, int q)
{
    for (int i = 0; i < N ; i++){
        if (p == i){
        V[i] = V[i] + q;
            cout << "Filme " << p << " devolvido"; }}
}

int main()
{
    int P[N];
    int s, p, q;

    cout << "Entre com a situacao da prateleira: " << endl;
    levet(P);
    cout << "(a)lugar, (d)evolver, (f)inalizar? "; cin >> s; // alugar = 0, devolver = 1, finalizar = 2

    while ( s!= 2){
        if (s == 0){
            cin >> p >> q;
            while (p !=-1 && q!=-1){
            subtracao(P, p, q);
            cout << endl;
            cin >> p >> q;}
        }
        else if (s == 1){
            cin >> p >> q;
            while (p!=-1 && q!= -1){
            adicao(P, p, q);
            cout << endl;
            cin >> p >> q;}
        }
        cout << "Situacao da prateleira: " << endl;
        impvet(P);
        cout << endl << "(a)lugar, (d)evolver, (f)inalizar? "; cin >> s; // alugar = 0, devolver = 1, finalizar = 2
    }

    cout << "Fim da execucao";
    return 0;
}
