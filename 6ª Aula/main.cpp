#include <iostream>

using namespace std;

float pot (float x,int n)
{
    int i;
    float p;
    i = 0;
    p = 1;
    while (i < n){
        p =  p*x;
        i = i+1;
    }
    return p;
}

int main()
{
    float x;
    int n;

    cin >> x >> n;

    cout << "O numero e: " << pot (x, n) << endl;
    return 0;
}
