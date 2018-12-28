#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a1, a2, a3, a4, a5;//Termos da PA
    int r, s; //Razao da PA/soma dos termos da PA

    a1 = 3;
    r = 3;

    a1 = a1 + 0*r;
    a2 = a1 + r;
    a3 = a2 + r;        // Termos
    a4 = a3 + r;
    a5 = a4 + r;

    cout <<"Os termos serao: "<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<" "<<a5<< endl;
    cout<< endl;

    s = (a1+a5)/2 *5; // soma dos termos

    cout<<"A soma dos termos sera de= "<< s << endl;


    return 0;
}
