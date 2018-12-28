#include <iostream>

using namespace std;

void quadcub(int a, int b, int &qq, int &qc)
{
    qq = qc = 0;
    int mq, mc;
    for(int i = 1; i < b; i++){
        mq = i*i;
        mc = i*i*i;


        if (mq >= a && mq <= b)
            qq++;

        if(mc >= a && mc <= b)
            qc++;
    }
}

int main()
{
    int a, b, qq, qc;

    cout << "Digite o intervalo: "; cin >> a>> b;
    quadcub(a,b,qq,qc);
    cout << "Quads perfeitos: " << qq << endl;
    cout << "Cubos perfeitos: " << qc;

    return 0;
}
