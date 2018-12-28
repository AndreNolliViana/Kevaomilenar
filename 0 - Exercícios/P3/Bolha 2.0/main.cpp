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

void ordena (int V[], int n){
int ult = n-1;
while (ult >=0){
    int i = 0;
    while (ult > i ){
        if(V[i]>V[i+1])
            troca (V[i], V[i+1]);
        i = i +1;
    }
    ult = ult - 1;
}

}


int main()
{
  int A [TAM];

    LeVet (A, TAM);
    ordena (A, TAM);
    ImpVet(A, TAM);
    return 0;}
