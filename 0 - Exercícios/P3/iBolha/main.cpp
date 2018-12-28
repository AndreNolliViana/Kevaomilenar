#include <iostream>
using namespace std;

void LeVet (int V[], int n){
int i = 0;
    while (i < n){
        cin >> V[i];
        i = i + 1; }
}
void ImpVet (int V[], int n){
int i = 0;
    while (i < n){
        cout << V[i] << " ";
        i = i + 1;}
}

void troca (int &a, int &b){
int t;
t=a;
a=b;
b=t;
}

void iBolha (int V[], int n){
int ult = n-1;
while (ult >=0){
    int i = 0;
    while (ult > i ){
        if(V[i]<V[i+1])
            troca (V[i], V[i+1]);
        i = i +1;
    }
    ult = ult - 1;
}

}


int main()
{
  int tam;

  cout << "Insira o tamanho do vetor: "; cin >> tam;

  int A[tam];

  cout << "Faca o vetor: "; LeVet(A, tam);

  iBolha(A, tam);

  cout << "Seu vetor em ordem crescente: "; ImpVet(A, tam);

  return 0;}
