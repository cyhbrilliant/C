#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double nsum(int n) {
	double sum = 0;
	for (int i = 1; i <= n; i++) {
		if (i%2 == 0) {
			sum -= 1./(double)i;
		}else {
			sum += 1./(double)i;
		}
	}
	return sum;
}

int main() {
	int m;
	while (cin >> m) {
		if (m <100) {
			for (int i = 0; i < m; i++) {
				int n;
				cin >> n;
				if (n < 1000) {
					cout << setiosflags(ios::fixed) << setprecision(2) << nsum(n) << endl;
				}
			}
		}
	}
	return 0;
}