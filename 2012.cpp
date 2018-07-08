#include <iostream>
#include <cmath>
using namespace std;

bool Prime(int n) {
	for (int i = 2; i <= (int)sqrt(n); i++) {
		if (n%i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int x, y;
	while (cin >> x >> y) {
		if (x == 0 && y == 0) {
			break;
		}else if (x >= -39 && y <= 50 && x < y) {
			bool isPrime = true;
			for (int i = x; i <= y; i++) {
				int temp = pow(i, 2) + i + 41;
				if (!Prime(temp)) {
					isPrime = false;
				}
			}
			if (isPrime) {
				cout << "OK" << endl;
			}else {
				cout << "Sorry" << endl;
			}
		}

	}

	return 0;
}