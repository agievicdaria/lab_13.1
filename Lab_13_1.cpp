#include <iostream>
#include <math.h>
#include <iomanip>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;
int main()
{
    cout << "x_p = "; cin >> x_p;
    cout << "x_k = "; cin >> x_k;
    cout << "dx = "; cin >> dx;
    cout << "e = "; cin >> e;
    cout << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(7) << "x"
         << " |"
         << setw(10) << "ln((x+1)/(x-1))"
         << " |"
         << setw(10) << "S"
         << " |"
         << setw(5) << "n"
         << " |"
         << endl;
    cout << "-------------------------------------------------" << endl;

    x = x_p;
    while (x <= x_k)
    {
        sum(); // виклик процедури обчислення суми

        cout << "|" << setw(7) << setprecision(2) << x << " |"
             << setw(15) << setprecision(5) << log((x + 1) / (x - 1)) << " |"
             << setw(10) << setprecision(5) << s << " |"
             << setw(5) << n << " |"
             << endl;

        x += dx;
    }
    cin.get();
    return 0;
}