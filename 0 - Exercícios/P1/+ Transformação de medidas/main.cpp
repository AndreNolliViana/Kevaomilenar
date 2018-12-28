#include <iostream>

using namespace std;

int main()
{
    float c, f;

    cin >> c;

    while ( c >= 0){
            f = (c*9.0/5.0) + 32;
            cout << "A temperatura em fahrenheit= " << f << endl;
    cin >> c;
    }

    while (c < 0){
        f = (c*9.0/5.0)+32;
        cout << " A temp em f em graus celcius negativos sera de= " << f << endl;
        cin >> c;
    }
return 0;
}
