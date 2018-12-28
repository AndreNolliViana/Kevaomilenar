#include <iostream>
#include <cmath>
using namespace std;

#define TAM 7

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

void ordena (int V[]){
int b;
int i = 0;
    while (i < TAM){
        b = V[i+1];
        if( V[i] > V[i+1]){
                V[i]= V[i+1];
                V[i+1]=b;
                i = i + 1;}
    }

    }

int main()
{
  int A [TAM];
  int i = 0;
    LeVet (A, TAM);
    while (i< TAM/2){
        troca (A[i], A[TAM - i - 1]);
        i = i + 1;
    }

    ImpVet(A, TAM);
    return 0;
}
