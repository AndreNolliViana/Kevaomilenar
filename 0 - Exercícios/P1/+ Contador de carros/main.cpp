#include <iostream>

using namespace std;

int main()
{
    float q1, q2, q3, q4, q5, m, s;
    int p, n;
    q1 = q2 = q3 = q4 = q5 = 0;

    cout << "Informe as praças e a quantidade de carros:" << endl;

    cin >> p >> n;

    while (p > 0) {
       if (p == 1){
        q1 =q1 + n;}
       if (p == 2){
        q2 = q2+n;}
       if (p == 3){
        q3 = q3 + n;}
       if (p == 4){
        q4 = q4 + n;}
       if (p == 5){
        q5 = q5 + n;}

    cin >> p >> n;}

    if ( p == 0 && n == 0 )
         cout << " praca 1: " << q1 << endl;
         cout << " praca 2: " << q2 << endl;
         cout << " praca 3: " << q3 << endl;
         cout << " praca 4: " << q4 << endl;
         cout << " praca 5: " << q5 << endl;

    s = q1+q2+q3+q4+q5;
    m = s/5;

    cout << "soma dos carros " << s << endl;
    cout << "media dos carros " << m << endl;

    return 0;
}
