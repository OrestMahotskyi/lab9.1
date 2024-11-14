#include <iostream>
#include <iomanip>
#include <cmath>
#include "nsVar.h"
#include "functions.h"

using namespace std;

int main() {
    using namespace nsVar;

    cout << "Enter the start value (xp): ";
    cin >> xp;
    cout << "Enter the end value (xk): ";
    cin >> xk;
    cout << "Enter the step (dx): ";
    cin >> dx;
    cout << "Enter the precision (eps): ";
    cin >> eps;

    cout << setw(10) << "x" << setw(15) << "ln(x)" << setw(15) << "S" << setw(10) << "n" << "\n";
    cout << string(50, '-') << "\n";

    for (x = xp; x <= xk; x += dx) {
        double actual_ln = log(x);
        double sum = funcTay::S();
        cout << setw(10) << x << setw(15) << actual_ln << setw(15) << sum << setw(10) << n << "\n";
    }

    return 0;
}
