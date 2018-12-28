#include <iostream>

using namespace std;

void LeVet(int V[11])
{
    for(int c = 0; c < 11 ; c++)
        cin >> V[c];
}
void ImpVet(int V[11])
{
    for(int c=0; c<11;c++)
        cout << V[c] << " ";
}

int DV(int V[11])
{
    int dv;

    dv = (11-((V[0]*11)+(V[1]*10)+(V[2]*9)+(V[3]*8)+(V[4]*7)+(V[5]*6)+(V[6]*5)+(V[7]*4)+(V[8]*3)+(V[9]*2))%11);

    if(dv==10||dv==11){
        V[10]=0;
        return 1;
    }
    else {
        V[10]=V[10];
    return 0;
    }
}

int main()
{
    int A[11];

    cout << "Informe o cpf: " << endl;
    LeVet(A);
    int k = DV(A);
    if(k==1){
        cout << "Cpf invalido" << endl;
            }
    else (k==0);{
        cout << "Cpf valido" << endl;
    }
    ImpVet(A);
    return 0;
}
