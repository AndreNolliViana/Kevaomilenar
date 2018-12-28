#include <iostream>

using namespace std;

int maior (int a, int b)
{
    int m;

    if ( a > b ){
        m = a;}
        else {
            m = b;}

    return m;
    }

int main()
{
    int x, y, w, z, r, t, p;

    cin >> x >> y >> w >> z;

    r = maior (x, y);
    t = maior (w, z);
    p = maior (r, t);

    cout << "o maior e: " << p << endl;

    return 0;

}
