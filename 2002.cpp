#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

#define PI 3.1415927

 int main() {
    double r;
    while (cin >> r) {
        cout << setiosflags(ios::fixed) << setprecision(3) << 4./3.*PI*pow(r, 3) << endl;
    }
    return 0;
 }
