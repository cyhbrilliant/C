#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int m, n;
	while (cin >> m >> n) {
		if (m >= 100 && m <= n && n <= 999) {
			bool have = false;
			for (int i = m; i <= n; i++) {
				int a, b, c;
				a = i/100;
				b = i%100/10;
				c = i%100%10;
				if (i == (pow(a, 3) + pow(b, 3) + pow(c, 3))) {
					if (have) {
						cout << " ";
					}
					have = true;
					cout << i; 				}
			}
			if (!have) {
				cout << "no";
			}
			cout << endl;
		}
	}


	return 0;
}