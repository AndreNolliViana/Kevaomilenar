#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int q, n, s;
    int v;

    q = n = s = 0;

    cin >> v;

    while ( v/2!=n || 2*v!=n ){
        n = v;
        q = q + 1;
        s = s + v;

        cin >> v;
}
   if( v/2 ==n || v*2 ==n )
    q = q + 1;
    cout << q << " " << s << " " << n << " " << v << endl;
    return 0;
}
