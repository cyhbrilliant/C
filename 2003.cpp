#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

 int main() {
    double r;
    while (cin >> r) {
        cout << setiosflags(ios::fixed) << setprecision(2) << abs(r) << endl;
    }
    return 0;
 }
