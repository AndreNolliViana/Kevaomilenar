#include <iostream>

using namespace std;

int main()
{
    int v[4];

    int i;
    i=0;

    while (i<4){
        cin >> v[i];
        i=i+1;}

    i = 0;

    while (i < 4){
        cout << v[i] << " ";
        i = i+1;
    }
    return 0;
    }
