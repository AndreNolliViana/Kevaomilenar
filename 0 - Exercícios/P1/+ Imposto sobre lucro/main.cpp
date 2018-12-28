#include <iostream>

using namespace std;

int main()
{
    float c, v, l, i;

    cin >> c >> v;

    l= v - c;

    if (0 <=l && l<=1000){
            cout << "Seu lucro foi: " << l;
    }
    if (1000.01 <=l && l<= 3729 ){
            i = l*0.1;
       cout << "Seu lucro foi: " << l <<endl;
       cout << "Imposto devido: " << i;
    }
    if (l > 3729){
            i = l*0.25;
        cout << "Seu lucro foi: " << l<< endl;
        cout << "Imposto devido: " << i;
    }
    return 0;
}
