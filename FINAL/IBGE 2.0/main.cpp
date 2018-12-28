#include <iostream>

using namespace std;

int main()
{
    float cd, dt, h, m;
    float ths, tms, tcs = 0;
    cout << "Dias trabalhados: "; cin >> dt;
    cout << "Cota diaria: "; cin >> cd;

    for (int z = 1; z <= dt; z++){
        cout << "Dia " << z << endl;
        cin >> h >> m;
        float th, tm, tc = 0;
         while (h!= -1 && m!= -1){
            if (tc < cd){
            th = th + h;
            tm = tm + m;
            tc = tc + 1;
            tcs = tcs + tc;
            ths = ths + th;
            tms = tms + tm;}

            cin >> h >> m;}
    }
    cout << "Total de casas: " << tcs << endl;
   cout << "Total de homens: " << ths << endl;
   cout << "Total de mulheres: " << tms << endl;
   cout << "Media de homens por casa: " << (ths/tcs) << endl;
   cout << "Media de mulhreses por casa: "<< (tms/tcs) << endl;


    return 0;
}
