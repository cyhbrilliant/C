#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int m, n;
	while (cin >> m >> n) {
		if (m > n) {
			int t = m;
			m = n;
			n = t;
		}
		long long odd = 0;
		long long even = 0;
		for (int i = m; i <= n; i++) {
			if (i%2 == 0) {
				even += pow(i, 2);
			}
			if (i%2 == 1) {
				odd += pow(i, 3);
			}
		}
		cout << even << " " << odd << endl;
	}
	return 0; 

}