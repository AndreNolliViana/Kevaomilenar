#include <iostream>

using namespace std;

int main()
{
    int a, b, s1, s2;
    s1 = s2 = 0;

    cout << "indique par de inteiros: ";
    cin >> a >> b;

    if ( a <= b ) {
            while ( a <= b ){
                    cout << a << " "<< endl;
                    s1 = s1 + a;
                    a = a+1;}
                    cout << "A soma e de: " << s1;
    }

    if ( a >= b ){
            while (a>=b){
                    cout << b << " " << endl;
                    s2 = s2 + a;
                    b = b + 1;}
                    cout << "A soma e de: " << s2;
    }

return 0;
}
