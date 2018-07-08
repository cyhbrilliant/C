#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	int n, m;
	while (cin >> n >> m) {
		if (n < 10000 && m < 1000) {
			double x = n;
			double result = 0;
			for (int i = 0; i < m; i++) {
				result += x;
				x = sqrt(x);
			}
			cout << setiosflags(ios::fixed) << setprecision(2) << result << endl;
		}
		// }else {
		// 	break;
		// }	
	}
	return 0;
}