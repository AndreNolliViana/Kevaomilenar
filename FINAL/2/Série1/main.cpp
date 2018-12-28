#include <iostream>

using namespace std;

int pot (float n, float p)
{
    float r = 1;
    for (int i = 0; i < p; i++)
        r = r*n;

    return r;
}

int main()
{
    int n;
    float s = 0.0;
    int k;

    cout << "Termos p/somar: "; cin >> n;

    for (int i = 0; i < n; i++){
        //k = pot (2, i);
        if (i == 0.0)
            s = s + 1.0;
        else if (i > 0.0)
            s = s + (1.0/pot(2, i));
    }
    cout << "Soma: " << s;
    return 0;
}
