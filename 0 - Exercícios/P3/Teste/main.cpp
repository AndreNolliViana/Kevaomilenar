#include <iostream>

using namespace std;

int main()
{
int M [3] [4];

M [1] [4] = 78;
M [2] [1] = 65;
M [3] [5] = 1; // ESSA CELULA DA MATRIZ N DEVERIA EXISTIR, COMO QUE APARECE:?

cout << M[1][4] << " " << M[2][1] << " " << M[3][5];

return 0;
}
